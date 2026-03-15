#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(b>d){
            cout<<-1;

        }
        else{
            int count=0;
            int colsum=d-b;
            count+=colsum;
            a+=colsum;
            if(a<c){
                cout<<-1;

            }
            else{
                int rowsum=a-c;
                count+=rowsum;
                cout<<count;
    
            }
        }
        cout<<endl;
    }

}