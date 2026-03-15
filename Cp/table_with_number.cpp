#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,h,l;
        cin>>n>>h>>l;
        vector<int>v(n);
       int  countmini=0;
       int countmaxi=0;
       int mini=min(h,l);
       int maxi=max(h,l);

        for(int i=0;i<n;i++){
            cin>>v[i];
            if(mini>=v[i]){
                countmini++;
            }
            if(h==l){
                continue;
            }
            else if(mini<v[i] &&  v[i]<=maxi){
                countmaxi++;
            }
            

        }
        if(h==l){
            cout<<countmini/2<<endl;
        }
        else{
            int mini=min(countmini,countmaxi);
            if(countmaxi==0){
                cout<<countmini/2<<endl;
            }
            else{
                int remain=0;
                if(countmini>mini){
                    remain=countmini-mini;
                    remain=remain/2;

                }
                cout<<mini+remain<<endl;
            }
          
        }
    }
}