#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];

        }
        int p=n;
        bool ltrue=false;
        int rindex=0;
        int lindex=0;


        for(int i=0;i<p;i++){
            if(v[i]==n){
                if(ltrue){
                    rindex=i;
                    break;
                }
                n=n-1;

            }
            else{
                if(!ltrue){
                    lindex=i;
                    ltrue=true;

                }

            }

            
        }
        
        while(lindex<=rindex){
            swap(v[lindex],v[rindex]);
            lindex++;
            rindex--;
        }
        for(int i=0;i<p;i++){
            cout<<v[i]<<" ";

        }
        cout<<endl;

    }

}