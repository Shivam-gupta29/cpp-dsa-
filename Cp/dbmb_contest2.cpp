#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s,x;
        cin>>n>>s>>x;
        vector<int>nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        long long  sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];

        }
        if(sum>s){
            cout<<"NO"<<"\n";

        }
        else{
            long long remain=s-sum;
            if(remain%x==0){
                cout<<"YES"<<endl;

            }
            else{
                cout<<"NO"<<endl;
            }
        }
       




        
    }
    
    



}