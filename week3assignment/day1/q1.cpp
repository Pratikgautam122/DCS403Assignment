#include <iostream>
using namespace std;

int main() {
    int n,i,sum=0; 
    cout<<"Enter the value of n :"<<endl;
    cin>>n;
    for(i = 1; i<=n;i++){
        sum+=i;
    }
    cout<<"The sum of the first "<<n<<" numbers is : "<<sum<<endl;
    return 0;
}