#include<iostream>
#include<list>
#include<queue>

using namespace std;
int main(){   // isme dono taraf se add and delete kar sakte hai means pop and pushb
  list<int>mylist;
  mylist.push_back(10);
  mylist.push_back(20);
  mylist.push_back(30);
  mylist.push_back(40);
  //mylist.insert((mylist.begin()+2),100);//we cant give the direct position because it basically linked list
  /// note : in satck we cant iterate in queue me bhi nhi kar sakte 
  queue<int>first;
deque<int>dq;
dq.push_back(10);
dq.insert(dq.begin()+1,100);

dq.erase(dq.begin()+1);// it is taking an iterator 
cout<<dq.front();
cout<< dq.back();




  


    
}