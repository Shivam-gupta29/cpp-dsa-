#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int n;
    while(t--){
        cin>>n;
        string s;
        cin>>s;
        int count=0;
        bool flag=true;
        
        if(s[0]=='.'){
            count+=1;
            if(n==1){
                cout<<count<<endl;
                continue;

            }
        }
        for(int i=1;i<n-1;i++){
            if(s[i]=='.' && s[i-1]=='.'&& s[i+1]=='.'){
                flag=false;
                cout<<2<<endl;
                break;

            }
            else if(s[i]=='#'){
                continue;
            }
            else{
                count+=1;
            }
        }
        if(flag==true){
            if(s[n-1]=='.'){
                count+=1;
            }
            cout<<count<<endl;
        }
        
    }
}
