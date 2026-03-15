#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    double ans=0.0;

    for(int i=0;i<n;i++){
       double x;
       cin>>x;
       ans+=x;

    }
  
    cout<<(ans/n)<<endl;

   

}