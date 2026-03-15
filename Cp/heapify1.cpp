#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n+1);
        for(int i=1;i<=n;i++){
            cin>>v[i];

        }
        bool temp=true;
        int count=1;
        for(int i=n;i>=1;i--){
            if(2*i<=n && v[i]>v[2*i]){
                swap(v[i],v[2*i]);
            }
        }
        
        for(int i=1;i<=n;i++){
            if(v[i]==count){
                count++;
                continue;
            }
            else{
                if(2*i<=n && v[2*i]==count){
                    swap(v[i],v[2*i]);
                    count++;
                    continue;
                }
                else{
                    temp=false;
                    break;
                }
            }

            
        }
        if(temp){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}