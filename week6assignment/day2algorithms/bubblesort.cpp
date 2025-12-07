#include <iostream>
using namespace std;

void bubble(int arr[], int n) {
    int temp = 0;
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                swapped = true;
            }
        }
        if (!swapped)  
            break;
    }
}

int main() {
    int arr[10] = {82, 42, 49, 8, 25, 52, 36, 93, 59, 15};
    int n = 10;

    cout << "Unsorted list is: \n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    
    cout << "\n";

    bubble(arr, n);

    cout << "Sorted list is: \n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << "\n";
    return 0;
}
