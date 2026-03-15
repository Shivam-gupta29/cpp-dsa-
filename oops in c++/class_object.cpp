#include<iostream>
#include<string>
using namespace std;
class Student{
public:
    
    // attributes
    int id;
    int age;
    string  name;
    int nos;
    int *gpa;

    // behaviour
    //ctor constructor
    Student(int id ,int age,string name,int nos,float gpa){
        this->id=id;
        this->name=name;
        this->age=age;
        this->nos=nos;
        this->gpa=new int(gpa);
            //Constructor ek special function hota hai jo object bante hi automatically call hota hai.
        cout<<"this is default constructor";

    }
    void study(){
        cout<<this->name<<"studying"<<endl;

    }
    void sleep(){
        cout<<this->name<<"sleep"<<endl;


    }
    void bunk(){
        cout<<this->name<<"bunking"<<endl;


    }
    ~Student(){
        delete gpa;

        cout<<"this  is destructor"<<endl;

    }

};
int main(){
    Student A(1,4,"shivam",5,4.0);
    cout<<A.age<<endl;
    A.bunk();

  
    return 0;


}
