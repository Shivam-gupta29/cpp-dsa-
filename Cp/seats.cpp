#include<bits/stdc++.h>
using namespace std;
int solve(string &s,int n,int index){
    if(index>=n){
        return 0;
    }
    int count=0;

    if(s[index]=='0'){
        count=1;

    }
    int inc=count+solve(s,n,index+2);
    int exc=solve(s,n,index+1);
    int ans=min(inc,exc);
    return ans;



}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        for(int i=0;i<n;i++){
            char ch;
            cin>>ch;
            s=s+ch;
            

        }
        int ans=solve(s,n,0);
        cout<<ans<<endl;


    }
}