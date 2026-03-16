#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        stack<int>st;
        for(int i=0;i<n;i++){
            cin>>v[i];
            
        }
       
        for(int i=n-1;i>=0;i--){
            while(st.size()>0 && st.top()<v[i]){
                st.pop();

            }
            st.push(v[i]);


        }
        cout<<st.size()<<endl;
       
    }
}
