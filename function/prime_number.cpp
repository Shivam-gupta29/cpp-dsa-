#include<iostream>
using namespace std;
void prime(){
    for (int i=1;i<=100;i++){
        int p=0;
        for (int j=1;j<=i;j++){
            if(i%j==0){
                p=p+1;

            }
        }
        if(p==2)
        cout<<i<<" ";
    }
    
}
int main (){
    prime ();
    return 0;

}