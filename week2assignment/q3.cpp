#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double a,b;
    cout << "Enter the First Number "<<endl;
    cin>>a;
    cout << "Enter the Second Number "<<endl;
    cin>>b;
    cout<<"Maximum = "<<fmax(a,b)<<endl;
    cout<<"Minimum = "<<fmin(a,b)<<endl;
    return 0;
}