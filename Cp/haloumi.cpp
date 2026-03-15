#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int n,k;
    while(t--){
        cin>>n>>k;
        vector<int>nums(n);

        for(int i=0;i<n;i++){
            cin>>nums[i];

        }
        // bool flag=true;

        // for(int i=1;i<n;i++){
        //     for(int j=0;j<i;j++){
        //         if(nums[i]<nums[j]){
        //             if(((i-j)+1)<=k){
        //                 sort(nums.begin()+j,nums.begin()+i);

        //             }
        //             else{
        //             flag=false;
        //             break;
        //             }
                    
                
        //         }
                
        //     }
        //     if(flag==false){
        //         break;
        //     }
        // }
        // if(flag==false){
        //     cout<<"NO"<<endl;

        // }
        // else{
        //     cout<<"YES"<<endl;
        // }
        if(k==1){
            bool flag=true;
            for(int i=1;i<n;i++){
                if(nums[i]<nums[i-1]){
                    flag=false;
                    break;
                }

            }
            if(flag==true){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        if(k>=2){
            cout<<"YES"<<endl;

        }

    }
}