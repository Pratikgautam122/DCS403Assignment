#include <iostream>
using namespace std;

int main() {
    int num,fac=1;
    cout<<"Enter a number "<<endl;
    cin>>num;
    for(int i=1;i<=num;i++)
    {
        fac *= i;
    }
    cout<<"The factorial of "<<num<<" is "<<fac<<endl;

    return 0;
}