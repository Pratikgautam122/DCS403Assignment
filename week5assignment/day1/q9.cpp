#include <iostream>
using namespace std;
void hanoi(int num,char fromrod,char torod,char auxrod){
    if(num==1){
        cout<<"Move disk 1 from "<<fromrod<<" to "<<torod<<endl;
        return;
    }
    hanoi(num-1,fromrod,auxrod,torod);
    cout<<"Move disk "<<num<<" from "<<fromrod<<" to "<<torod<<endl;
    hanoi(num-1,auxrod,torod,fromrod);
}
int main(){
    int num;
    cout<<"Enter no of disks "<<endl;
    cin>>num;
    hanoi(3,'A','C','B');

}