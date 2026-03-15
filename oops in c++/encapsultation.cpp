#include<iostream>
#include<string>
using namespace std;
class Student{
private:
    
    // attributes
    int id;
    int age;
    string  name;
    int nos;
    float *gpa;
public:  


    // behaviour
    //ctor constructor
    Student(int id ,int age,string name,int nos,float gpa){
        this->id=id;
        this->name=name;
        this->age=age;
        this->nos=nos;
        this->gpa=new float(gpa);
            //Constructor ek special function hota hai jo object bante hi automatically call hota hai.
        cout<<"this is default constructor";

    }
    //  ek chij yad rakhna getter setter in public hota hai 
    void setgpa(float a){
        // ek aur layer laga diye
        *this->gpa=a;

    }
    float getgpa(){
        return *this->gpa;

    }
    int  getage(){
        return this->age;

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
private:
    void gfchatting(){
        cout<<"gf chatting"<<endl;

    }


};
int main(){
    Student A(1,4,"shivam",5,4.0);
    Student *B=new Student(2,5,"vinit",4,5.0);

   //  cout<<A.age<<endl;       ye nhi accesss ho paega by getter setter jana hogA
   cout<<A.getage();

    A.bunk();

  
    return 0;


}
