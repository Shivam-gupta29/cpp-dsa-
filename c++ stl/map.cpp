#include<iostream>
#include<unordered_map>

using  namespace std;
int main(){
    int arr[]={1,1,1,2,2,4,0,0,};
    unordered_map<int,int>first;
    for(int i=0;i<8;i++){
        first[arr[i]]++;
    

    }
    for(int j= 0;j<8;j++){ // 0 do bar hi hai 
        //1 teen bar hai 
        cout<<first[j]<<endl; // ye key de rahe hai  aur kitna hai vo aa raha hai 

    }
    // cout<<first.count(7); // 7 tk size hai to 1 return karega varna uske bad 0 rerturn kareg very very imporstat
    // unordered_map<int,int>::iterator it=first.begin();
    // while(it!=first.end()){
    //     pair<int,int>p=*it;
    //     cout<<p.first<<" "<<p.second<<endl; // ye thoda samajh nhi aaya hai 
        

    //     it++;


    // }
}
