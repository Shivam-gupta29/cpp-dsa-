#include<iostream>
#include<vector>
using namespace std;
int main(){
   vector<int> marks(5,0);
   //cout<<marks.front()<<endl;

   
   marks.push_back(10);
   //cout<<marks.front()<<endl;
  


   marks.push_back(20);
   marks.push_back(300);
   

   marks.pop_back();
   cout<<marks.back()<<endl;
   cout<<marks.front()<<endl;
   int p=marks.capacity();
   cout<<"p"<<p<<" ";
    


  marks.insert(marks.begin()+2,40);// it is taking iterator  basically 
  int n=marks.size();
   for(int i=0;i<n;i++){
      cout<<marks[i]<<" ";
   }
  

   //cout<<marks[0];
//    cout<<marks.size();
   vector<vector<int>> ar(4,vector<int>(4,0));
   // int n=ar.size();
   // cout<<n;
   // vector<vector<int>> v2(2, vector<int>(3, 11));


}
