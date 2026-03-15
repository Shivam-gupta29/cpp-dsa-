#include<iostream>
#include<string>
using namespace std;

int main(){
    cout<<"enter string"<<endl;
    string str;
    getline(cin,str);
    if(str.find("a")==string::npos){
        cout<<"a is not forund;";

    }
    str.erase(2,2);
    cout<<str;
    str.replace(2,5,"c+kkfxvjkbknlkvnblm");  // jab jarurat se jadada bada lenngth doge to nhi hoga 




}