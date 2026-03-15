#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        vector<int> v(n);

        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        set<int>st;
        for(auto it:v){
            st.insert(it);

        }
       
        int count=0;
        int curr=0;
        int maxi=INT_MIN;


        for(auto it:st){
            if(st.find(it-1)==st.end()){
                curr=it;
                count=1;
                while(st.find(curr+1)!=st.end()){
                    count++;
                    curr++;

                }
                maxi=max(maxi,count);


            }
        }
        cout<<maxi<<endl;

        

        
    }
}