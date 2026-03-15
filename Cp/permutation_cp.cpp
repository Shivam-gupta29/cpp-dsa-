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
        int p=0;
        int q=n;
        bool flag=true;

        if(nums[0]==n){
            for(int i=0;i<n;i++){
                if(nums[i]==q){
                    q=q-1;
                    if(q==0){
                        flag=false;

                    }
                }
                else{
                    p=i;
                    break;

                }
            }
        }
        if(flag==false){
            for(int i=0;i<n;i++){
                cout<<nums[i]<<" ";

            }
            cout<<endl;

        }
        else{
            int number=nums[p];
            for(int j=p+1;j<n;j++){
                if(nums[j]>number){
                    t=nums[j];
                    nums[p]=t;
                    nums[j]=number;
                    break;
                }
            }
            for(int i=0;i<n;i++){
                cout<<nums[i]<<" ";

            }
            cout<<endl;
            
        }
    }
}