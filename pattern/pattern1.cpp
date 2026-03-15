#include<iostream>
using namespace std;
int main(){
    int n=5;
     int j=1;
     int sp;
        while(n>=1){
            sp=n-1;
            for(int i=1;i<=sp;i++){
                cout<<"  ";

            }
            for(int k=1;k<=j;k++){
                cout<<"* ";
            }
            j=j+2;
            n=n-1;
            cout<<endl;
        
        }
    
}

   