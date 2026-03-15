#include<iostream>
#include<limits.h>
#include<vector>

using namespace std;
int findFirstRepeatingElement(vector<int>& arr){
        //sort(arr.begin(),arr.end());
        int n=arr.size();
        int max=INT_MIN;
        for(int i=0;i<n;i++){
            if(arr[i]>max){
                max=arr[i];

            }
        }
        int arr2[max]={0};
        cout<<"max"<<max;

        for(int i=0;i<n;i++){
            
            arr2[arr[i]-1]++;

        }
        for(int i=0;i<n;i++){
            cout<<arr2[i]<<" ";
            
            

        }
        for(int i=0;i<max;i++){
            if(arr2[i]>1){
                return i+1;

            }
        }
        return -1;
    }

int main(){
    vector<int>arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(5); 
    arr.push_back(5);
    
    int n=findFirstRepeatingElement(arr);
    cout<<n;


}


