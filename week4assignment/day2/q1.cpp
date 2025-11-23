#include <iostream>
using namespace std;

int main() {
    int num[3][3];
    cout<<"Enter the elements in the matrix: ";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> num[i][j];
        }
    }
    
    cout<<"The matrix is: "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        cout<<num[i][j]<<" ";
    }
    cout<<endl;
    }

    return 0;
}