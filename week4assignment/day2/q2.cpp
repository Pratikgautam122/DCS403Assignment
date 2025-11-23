#include <iostream>
using namespace std;

int main() {
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int sum = 0;
    
    cout << "Q2: Sum of All Elements" << endl;
    cout << "Array:" << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
            sum += arr[i][j];
        }
        cout << endl;
    }
    
    cout << "Sum = " << sum << endl << endl;

    return 0;
}