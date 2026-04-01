#include <iostream>
using namespace std;

class Vehicle {
public:
    Vehicle() {
        cout << "Vehicle Constructor Called" << endl;
    }
};

class Car : public Vehicle {
public:
    Car() {
        cout << "Car Constructor Called" << endl;
    }
};

class ElectricCar : public Car {
public:
    ElectricCar() {
        cout << "ElectricCar Constructor Called" << endl;
    }
};

int main() {
    ElectricCar e1;
    return 0;
}