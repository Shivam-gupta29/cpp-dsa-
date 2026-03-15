#include <iostream>
#include <string>
using namespace std;

class Vehicle {
public:
    string name;
    string model;
    int nof;

    Vehicle(string _name, string _model, int _nof) {
        cout << "This is base class constructor" << endl;
        this->name = _name;
        this->model = _model;
        this->nof = _nof;
    }

    void start_engine() {
        cout << "Engine is starting " << name << endl;
    }

    void stop_engine() {
        cout << "Engine is stopping" << endl;
    }
};

class Car : public Vehicle {
public:
    int noofdoor;
    string transmissionType;

    Car(string _name, string _model, int _nof,
        int _noofdoor, string _transmissiontype)
        : Vehicle(_name, _model, _nof) { // jab hm derived class ka ctor banenge tabhmko base class ka ctor bhi bhejanan hoga n  isliye aisa syntax hai be clarefull;


        cout << "This is derived class constructor" << endl;
        this->noofdoor = _noofdoor;
        this->transmissionType = _transmissiontype;
    }

    void startac() {
        cout << "AC has started of " << name << endl;
    }
};

int main() {
    Car A("Maruti 800", "LXI", 4, 4, "Manual");
    A.start_engine();
    A.startac();
    return 0;
} // pahle base ctor called then derived class ctor called be carefull;

