#include <iostream>
using namespace std;

int main() {
    int num,rev=0,tem;
    cout<<"Enter a number "<<endl;
    cin>>num;
    int orignal =num;
    while(num>0){
        tem = num%10;
        rev =rev*10+ tem;
        num = num/10;
    }
    cout<<"The reverse of "<<orignal<<" is "<<rev<<endl;

    return 0;
}