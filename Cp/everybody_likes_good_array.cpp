#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        int count=0;

        for(int i=0;i<n;i++){
            cin>>v[i];
            
        }
        for(int i=1;i<n;i++){
            if(i>0){
                if(v[i]%2==0){
                    if(v[i-1]%2==0){
                        count+=1;

                    }
                
                }
                
                    else{
                        if(v[i-1]%2==1){
                            count+=1;

                        }

                    }
                
            }
        }
        cout<<count<<endl;
        
        }

}