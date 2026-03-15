#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    int n,q,l,r;

    while(t--){
        cin>>n>>q;
        vector<int>a(n);
        vector<int>b(n);


        for(int i=0;i<n;i++){
            cin>>a[i];



        }
        for(int i=0;i<n;i++){
            cin>>b[i];

        }
        int j=n-1;
        while(j>=0){
            if(j+1<n){
                if(a[j]>a[j+1]){
                    a[j]=a[j+1];
                }
            }
            if(b[j]>a[j]){
                a[j]=b[j];

            }
            j=j-1;

        }
        for(int i=0;i<q;i++){
            int l,r;
            cin>>l>>r;
            int sum=0;

            if(l-1>=0 && r<=n){
                for(int i=l-1;i<r;i++){
                    sum+=a[i];

                }
                cout<<sum<<" ";


            }

           
        }
        cout<<endl;

    }
}