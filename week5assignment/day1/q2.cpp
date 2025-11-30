#include <iostream>
using namespace std;
int facto(int num){
    if (num==0||num==1)
        return 1;
    return num*facto(num-1);

}
int main() {
    int num;
    cout<<"Enter the number :"<<endl;
    cin>>num;
    cout<<"Factorial of the number is :"<<facto(num)<<endl;
    return 0;
}