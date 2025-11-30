#include <iostream>
using namespace std;
void series(int num){
    if (num==0)
        return;
     series(num-1);
     cout<<num<<" ";

}
int main() {
    int num;
    cout<<"Enter the number :"<<endl;
    cin>>num;
    series(num);
    return 0;
}