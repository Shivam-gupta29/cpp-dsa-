#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    int m=x/5;
    int n=x%5;
    if(n<5 && n!=0){
        n=1;

    }
    cout<<m+n<<endl;
   
 }
