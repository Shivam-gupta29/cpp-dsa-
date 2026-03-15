#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x=0;

    while(n--){
        string s="";
        cin>>s;
        if((s[0]=='X'&& s[1]=='+')|| s[0]=='+'){
            x=x+1;
        }
        else{
            x=x-1;

        }
       
    }
    cout<<x<<endl;
    
}