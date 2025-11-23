#include <iostream>
using namespace std;
int sumarr(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum +=arr[i];
    }
    return sum;

}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

   

    cout << "The sum of the elements  is: " << sumarr(arr,n) << endl;

    return 0;
}
