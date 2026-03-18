#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,c,m;
        cin>>a>>b>>c>>m;

        long long lab = (a/__gcd(a,b))*b;
        long long lac = (a/__gcd(a,c))*c;
        long long lbc = (b/__gcd(b,c))*c;
        long long labc = (lab/__gcd(lab,c))*c;

        long long nodays_abc = m/labc;
        long long nodaysab = m/lab;
        long long nodaysbc = m/lbc;
        long long nodaysac = m/lac;
        long long nodaysa = m/a;
        long long nodaysb = m/b;
        long long nodaysc = m/c;

        long long ansa=0, ansb=0, ansc=0;

       
        ansa += nodays_abc * 2;
        ansb += nodays_abc * 2;
        ansc += nodays_abc * 2;

        
        long long onlyAB = nodaysab - nodays_abc;
        long long onlyAC = nodaysac - nodays_abc;
        long long onlyBC = nodaysbc - nodays_abc;

        ansa += onlyAB*3 + onlyAC*3;
        ansb += onlyAB*3 + onlyBC*3;
        ansc += onlyAC*3 + onlyBC*3;

       
        long long onlyA = nodaysa - nodaysab - nodaysac + nodays_abc;
        long long onlyB = nodaysb - nodaysab - nodaysbc + nodays_abc;
        long long onlyC = nodaysc - nodaysac - nodaysbc + nodays_abc;

        ansa += onlyA*6;
        ansb += onlyB*6;
        ansc += onlyC*6;

        cout<<ansa<<" "<<ansb<<" "<<ansc<<"\n";
    }
}