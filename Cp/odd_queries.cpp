#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<int>v(n);
        vector<long long>prefix(n);
        vector<long long>suffix(n);

        for(int i=0;i<n;i++){
            cin>>v[i];

        }
        
        prefix[0]=v[0];

        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]+v[i];

        }
        suffix[n-1]=v[n-1];
        for(int i=n-2;i>=0;i--){
            suffix[i]=suffix[i+1]+v[i];


        }
        for(int i=0;i<q;i++){
            int l,r,k;
            cin>>l>>r>>k;
            long long sum=0;
            long long m=1LL*(r-l+1)*k;
            if(l-2>=0){
                sum+=prefix[l-2];


            }
            if(r<n){
                sum+=suffix[r];

            }
           
            sum+=m;
            if(sum%2==1){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
    }

         
}