#include<iostream>
using namespace std;
int main(){
    int a=5;
    void *p;
    p=&a;
    int *p1=(int*)p; // type cast kiye alag alag pointer me 
    (*p1)++;

    cout<<a;
}