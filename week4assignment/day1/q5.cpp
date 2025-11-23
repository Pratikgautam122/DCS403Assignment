#include <iostream>
using namespace std;
int binarysearch(int num[],int size,int target){
    int low=0,high=size-1;
    while(low<=high){
        int mid =(low+high)/2;
        if(target==num[mid])
        return mid;
        else if(target>num[mid]){
            low=mid+1;
        }
        else 
        high=mid-1;
    }
    return -1;
}
int main() {
    int num[5]={2,3,5,7,11},target,mid;
    cout<<"Enter the num you want for find : "<<endl;
    cin>>target;
    int result=binarysearch(num,5,target);
    if(result!=-1){
        cout<<"The element is at the index : "<<result+1<<endl;
    }
    else
    cout<<"The element is not in the array"<<endl;
    return 0;
}