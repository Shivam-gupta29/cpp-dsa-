#include<bits/stdc++.h>
using namespace std;
int main(){
     long long t;
     cin>>t;
     while(t--){
         long long x;
         cin>>x;
         string s=to_string(x);
         int n=s.length();
         int mini=n-2;


        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int numi=s[i]-'0';
                int numj=s[j]-'0';
                long long  sum=numi*10+numj;
                if(sum%25==0){
                    mini=min(mini,n-i-2);

                }
            }
         }
         cout<<mini<<endl;
     }

}