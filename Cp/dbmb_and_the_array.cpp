#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s,x;
        cin>>n>>s>>x;
        long long sum=0;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            sum+=v[i];

        }
        if(sum==s){
            cout<<"YES"<<endl;

        }
        else{
            if(sum>s){
                cout<<"NO"<<endl;

            }
            else{
                int remain=s-sum;
                if(remain%x==0){
                    cout<<"YES"<<endl;

                }
                else{
                    cout<<"NO"<<endl;
                    
                }
            }
        }
    }
}