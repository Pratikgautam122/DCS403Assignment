#include <iostream>
using namespace std;

int main() {
    int num[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    cout<<"The row sums are : ";
    for(int i = 0; i < 3; i++) {
        int rowsum=0;
        for(int j = 0; j < 3; j++) {
            rowsum+=num[i][j];
        }
        cout<<rowsum<<" ";
    }
    cout<<endl;
    cout<<"The column sums are : ";
    for(int j = 0; j < 3; j++) {
        int columnSum = 0;
        for(int i = 0; i < 3; i++) {
            columnSum += num[i][j];
        }
        cout << columnSum<<" ";
    }
    return 0;
}