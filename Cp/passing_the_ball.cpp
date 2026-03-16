#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int i=1;
        int count=1;
        while(i<n && s[i]!='L'){
            count++;
            i++;


        }
        count=count+1;
        cout<<count<<endl;
    }
}