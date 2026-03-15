#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n,0);
        vector<int>ans(n,0);
        for(int i=0;i<n;i++){
            int ih;
            cin>>ih;
            v[i]=ih;
            ans[i]=n-ih+1;

        }
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;

    }
}