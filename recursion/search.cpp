#include<iostream>
using namespace std;
int search(int[],int,int);
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int ans=search(arr,88,7);
    if(ans==-1){
        cout<<"not found";


    }
    else{
        cout<<"found"<<ans;

    }

}
int search(int arr[],int target,int size){
    if(size==0){
        return -1;
    }
    if(arr[size-1]==target){
        return size-1;
    }
    int ans=search(arr,target,size-1);
    return ans;

}