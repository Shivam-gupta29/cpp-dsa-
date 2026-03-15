#include<bits/stdc++.h>
using namespace std;
class abc{
    int x;
    int *y;
public:
     abc(){
        x=0;
        y=new int(0); 
        const int z;

     }
    int getx() const {   // agar tum const keyword likh dete ho tum koi member variable change nhi kar paoge .

        // x=20;  // error
        return x;

    }
    abc(int _x,int _y,int _z){
        x=_x;
        y=new int (_y);
        //z=_z;  // as you declare constas z noraml se intialize nhi kar sakte hai intilaization list se kar sakte ho .


    }
    // initialization list 
    //constructor 
    abc (int _x,int _y,int _z=0):x(_x),y(new int(_y)),z(_z){

    }

}
int main(){

}