#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,q;
        cin>>n>>q;

        vector<int>a(n);
        vector<int>b(n);

        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        for(int i=0;i<n;i++){
            cin>>b[i];
        }

        for(int i=n-1;i>=0;i--){
            if(i+1<n && a[i] < a[i+1]){
                a[i] = a[i+1];
            }
            if(a[i] < b[i]){
                a[i] = b[i];
            }
        }
        vector<long long>ans(n);
        ans[0]=a[0];

        for(int i=1;i<n;i++){
            ans[i]=ans[i-1]+a[i];


        }
        while(q--){
            int l,r;
            cin>>l>>r;
            if(l-2<0){
                cout<<ans[r-1]<<" ";
            }
            else{
                long long sum=ans[r-1]-ans[l-2];
                cout<<sum<<" ";

            }
          
            
        }
        cout<<endl;


       
    }
}