#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n,m,h;
        cin>>n>>m>>h;

        vector<int>v(n,0);
        vector<int>a(n,0);
        for(int i=0;i<n;i++){
            cin>>v[i];
            a[i]=v[i];

        }
        vector<int>d(m);
        for(int i=0;i<m;i++){
            int b,c;
            cin>>b>>c;
            long long cal=a[b-1]+c;
            if(cal>h){
               for(int j=0;j<d.size();j++){
                a[d[j]]=v[d[j]];

               }
               d.clear();
               

            }else{
                a[b-1]=cal;
                d.push_back(b-1);


            }
        }
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";

        }
        cout<<endl;
    }
}