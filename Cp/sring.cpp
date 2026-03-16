#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,m;
        cin>>a>>b>>c>>m;
        int lab=(a/__gcd(a,b))*b;
        int lac=(a/__gcd(a,c))*c;
        int lbc=(b/__gcd(b,c))*c;
        int ansa=0;
        int ansb=0;
        int ansc=0;

        int labc=(lab/__gcd(lab,c))*c;
        for(int i=1;i<=m;i++){
            if(i%a==0){
                if(i%labc==0){
                    ansa+=2;

                }
                else if(i%lab==0 || i%lac==0){
                    ansa+=3;

                }
                else{
                    ansa+=6;

                }
            }
            if(i%b==0){

                if(i%labc==0){
                    ansb+=2;

                }
                else if(i%lab==0 || i%lbc==0){
                    ansb+=3;

                }
                else{
                    ansb+=6;

                }

            }
            if(i%c==0){
                if(i%labc==0){
                    ansc+=2;

                }
                else if(i%lbc==0 || i%lac==0){
                    ansc+=3;

                }
                else{
                    ansc+=6;

                }
            }
        }
        cout<<ansa<<" "<<ansb<<" "<<ansc<<" "<<endl;
    }
}