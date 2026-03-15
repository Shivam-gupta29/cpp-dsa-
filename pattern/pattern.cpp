#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number "<<endl;
    cin>>n;

       
    for (int j=1;j<=n;j++){
        for(int i=1;i<=n;i++){
        if(i==1 || i==n){
            cout<<"* ";
        }
                else{
                    if(j==1 || j==n){
                        cout<<"* ";

                    }
                    else{
                        cout<<" ";

                    }
                }
            }
            cout<<endl;
        }
}