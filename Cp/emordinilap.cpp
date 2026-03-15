#include<bits/stdc++.h>
using namespace std;
int mod=1e9+7; 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long ans=(n*(n-1))%mod;
        long long fact=1;
        // har permuattaion k liye utan hi 
        for(int i=1;i<=n;i++){
            fact=(fact*i)%mod;
        }
        cout<<(ans*fact)%mod<<endl;
       
    }

}