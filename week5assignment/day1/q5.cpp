#include <iostream>
using namespace std;

int power(int a, int b,int result=1) {
    if(b==0)
    return result;
    return power(a,b-1,result*a);
}

int main() {
    int a,b;
    cout<<"Enter the base : "<<endl;
    cin >> a;
    cout<<"Enter the power : "<<endl;
    cin>>b;
    cout<<power(a,b)<<endl;;
    return 0;
}
