// ye vector ka pahla program hai samjh lo acha se 



#include<iostream>
#include<vector>
using namespace std;
vector<int> printPrimes(int N){
        vector<int>v;
        int j,count=0;

        for(int i=2;i<=N;i++){
            j=i;
            count=0;
            for(int k=1;k<=j;k++){
                if(j%k==0){
                    count=count+1;

                }
            }
            if(count==2){
                v.push_back(j);

            }
        }
        return (v);
    }
int main(){
    vector<int>s;
    s=printPrimes(20);
    for(int i:s){
        cout<<i<<" ";

    }
}    

