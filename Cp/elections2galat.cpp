#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
        vector<int>v(3);
        v[0]=a;
        v[1]=b;
        v[2]=c;
 
        int maxi=max(a,max(b,c));
        if(a==b && b==c){
            for(int i=0;i<3;i++){
                cout<<maxi+1<<" ";
 
            }
        }
        else if((a==b && maxi==c)|| (b==c && maxi==a)||(c==a && maxi==b)){
            for(int i=0;i<3;i++){
                int remain=maxi-v[i];
                if(remain==0){
                    cout<<0<<" ";
 
                }
                else{
                    cout<<remain+1<<" ";
 
                }
            }
           
        }
        else if(a==b || b==c||c==a){
            for(int i=0;i<3;i++){
                int remain=maxi-v[i];
                if(remain==0){
                    cout<<1<<" ";
 
                }
                else{
                    cout<<remain+1<<" ";
 
                }
            }
           
        }
        else{
            for(int i=0;i<3;i++){
                int remain=maxi-v[i];
                if(remain==0){
                    cout<<0<<" ";
 
                }
               else{
                cout<<remain+1<<" ";
               }
            }
        }
        
    }
 
}