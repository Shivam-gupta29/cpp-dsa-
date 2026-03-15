#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int n;
    while(t--){
        cin>>n;
        vector<int>nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];

        }
        if(nums[0]!=1){
            cout<<"No"<<endl;
        }
        else{
            int i=1;
            while(i+1<n){
                if(nums[i]>nums[i-1]&& nums[i]>nums[i+1]){
                    int t=nums[i];
                    nums[i]=nums[i+1];
                    nums[i+1]=t;

                }
                i++;
            }
            bool flag=true;
            for(int i=0;i<n-1;i++){
                if(nums[i]>nums[i+1]){
                    flag=false;
                }
            }
            if(flag==false){
                cout<<"No"<<endl;
            }
            else{
                cout<<"Yes"<<endl;
            }
        }
        
    }
}