#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        int count0=0;
        int countd=0;
        set<int>st;

        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]==0){
                count0++;

            }
            else{
                countd++;

            }
            if(v[i]!=0){
                st.insert(v[i]);

            }
          

        }
      if(count0 > countd + 1){
    if(st.size()>1 || st.size()==0){
        cout<<1<<endl;
    }
    else{
        int x=*st.begin();
        if(x>=2){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }
}
else{
    cout<<0<<endl;
}
    }
}