#include<bits/stdc++.h>
using namespace std;
int main(){
     int t;
     cin>>t;
     while(t--){
        int n;
        cin>>n;
       
        bool sixtyseven=false;
        vector<int>v(n);
                for(int i=0;i<n;i++){
            cin>>v[i];
            
            if(v[i]==67){
                sixtyseven=true;

            }
        }
        if(sixtyseven){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
     }
}