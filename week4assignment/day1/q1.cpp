#include <iostream>
using namespace std;

int main() {
    int num[5];
    for(int i=0;i<5;i++){
        cout<<"Enter the elements in the array : ";
        cin>>num[i];
        cout<<endl;
    }
    cout<<"The elements in the array are : ";
    for(int i=0;i<5;i++){
        cout<<num[i]<< " ";
    }

    return 0;
}