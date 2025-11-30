#include <iostream>
using namespace std;
int sumdig(int num){
    if (num==0)
    return 0;
    return num%10+sumdig(num/10);
    
}
int main() {
    int num;
    cout<<"Enter the number :"<<endl;
    cin>>num;
    cout<<"Sum of the digits is :"<<sumdig(num)<<endl;
    return 0;
}