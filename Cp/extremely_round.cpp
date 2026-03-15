#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count1=0;

        if(n>=100000){
            count1+=(n/100000);
            n=90000;
        }
        if(n>=10000 && n<100000){
            count1+=(n/10000);
            n=9000;

        }
        if(n>=1000 && n<10000){
            count1+=(n/1000);
            n=900;

        }
        if(n>=100 && n<1000){
            count1+=n/100;
            n=90;

        }
        if(n>=10 && n<100){
            count1+=n/10;
            n=9;

        }
        count1+=n;
        cout<<count1<<endl;

    }
}