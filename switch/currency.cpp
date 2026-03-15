#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number ";

    cin >>n;

    int p=1;
    switch(p){
        case 1:
        if(n>=100){
            int p1=n/100;
            cout<<"number of hundred notes "<<p1<<endl;
            n=n-(p1*100);
        }
        case 2:
        if(n>=50){
            int p1=n/50;
            cout<<"number of fifty notes is "<<p1<<endl;
            n=n-(50*p1);

        }
        case 3:
        if(n>=20){
            int p1=n/20;
            cout<<"number of twenty  notes is "<<p1<<endl;
            n=n-(20*p1);
        }
        case 4:
        if(n>=10){
            int p1=n/10;
            cout<<"number of ten's notes is "<<p1<<endl;
            n=n-(10*p1);
        }
        case 5:
        if(n>0){
            cout<<"rest all you give he coins"<<endl;
        }

            

            

        
        
        

    }
}