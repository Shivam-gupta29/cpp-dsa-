#include<bits/stdc++.h>
using namespace std;
class abc{
    public:
    int x;
    int *y;
    abc(int _x,int _y):x(_x),y(new int (_y)){}

    
    abc(const abc &obj){
        x=obj.x;
        y=obj.y;

    }
    // abc(const abc&obj){  // deep copy
    //     x=obj.x;
    //     y=new int(*obj.y);

    // }
    void print() const {
        cout<<"x is"<<x<<" y location"<<y<< "value is"<<*y;

    }
    ~abc(){
        delete y;  // but ye shallow copy me problem karega n  not tum already

    }

};
int main(){
    abc a(1,2);
    a.print();
    abc b=a;
    *b.y=20;
    a.print();
    b.print();


}