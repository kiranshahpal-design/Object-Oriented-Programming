#include <iostream>
using namespace std;

class Calculator {
public:
    double add(double a, double b) {
        return a + b;
    }

    double multiply(double a, double b) {
        return a * b;
    }
};

class Student {
    Calculator* calc;

public:
    Student(Calculator* c) {
        calc = c;
    }

    void performAdd(double a, double b) {
        cout << "Addition Result: " << calc->add(a, b) << endl;
    }

    void performMultiply(double a, double b) {
        cout << "Multiplication Result: " << calc->multiply(a, b) << endl;
    }
};

int main() {
    Calculator sharedCalc;

    Student s1(&sharedCalc);
    Student s2(&sharedCalc);

    s1.performAdd(2, 3);
    s2.performMultiply(4, 5);

    return 0;
}