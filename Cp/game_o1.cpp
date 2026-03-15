#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s="";
        cin>>s;
      
        
        int i=0;
        int j=1;
        int count1=0;
        int count0=0;

        for(auto ch:s){
            if(ch=='1'){
                count1++;

            }
        }
        count0=s.length()-count1;
        int mini=min(count0,count1);

       
        if(mini%2==0){
            cout<<"NET"<<endl;
        }
        else{
            cout<<"DA"<<endl;
        }
        
    }
    
}
