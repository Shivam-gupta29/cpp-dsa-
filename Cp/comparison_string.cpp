#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(n==1){
            cout<<"2"<<endl;
            continue;

        }
        int count=1;
        int i=0;
        int j=1;
        int maxi=INT_MIN;
        while(j<n){
            if(s[i]==s[j]){
                count++;
                i++;
                j++;

            }
            else{
                i++;
                j++;
                maxi=max(count,maxi);
                count=1;

            }
        }
        maxi=max(count,maxi);

        cout<<maxi+1<<endl;

    }
}