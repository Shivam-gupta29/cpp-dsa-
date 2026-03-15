#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int maxi=INT_MIN;

        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            maxi=max(maxi,v[i]);

        }
        long long ans=maxi*n;
        cout<<ans<<endl;

    }
}