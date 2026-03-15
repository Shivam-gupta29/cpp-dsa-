#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        if(a+b>n){
            if((a+b)%n==0){
                cout<<"yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
        else{
            int remain=n-(a+b);
            if(remain>1){
                cout<<"yes"<<endl;

            }
            else{
                cout<<"no"<<endl;

            }
        }
    }

}