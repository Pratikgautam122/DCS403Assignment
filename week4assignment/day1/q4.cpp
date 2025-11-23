#include <iostream>
using namespace std;
int linearsearch(int num[],int size,int target){
    for(int i=0;i<size;i++){
        if(num[i]== target)
        return i;
        
    }
    return -1;
}
int main() {
    int target,num[5]={1,3,8,9,5};
    cout<<"Enter the element you want to find "<<endl;
    cin>>target;
    int result = linearsearch(num, 5, target);

    if (result != -1)
        cout << "Element found at the position " << result+1;
    else
        cout << "Element not found";


    return 0;
}