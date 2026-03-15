#include<iostream>
using namespace std;
int linear(int arr[],int size,int target ){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;

}
int main(){
    int arr[10];
    int n;
    for(int i=0;i<5;i++){
        
        cout<<"enter a number "<<endl;
        cin>>n;
        arr[i]=n;


    }
    int x=linear(arr,5,10);
    cout<<"eleemnt  "<<x;
    return 0;


}
    
