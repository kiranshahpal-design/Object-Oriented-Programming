#include <iostream>
using namespace std;

class Display {
    double lastResult;

public:
    Display() {
        lastResult = 0;
    }

    void show(double result) {
        lastResult = result;
        cout << "Result: " << result << endl;
    }

    double getLastResult() {
        return lastResult;
    }
};

class Calculator {
    Display screen;

public:
    double add(double a, double b) {
        double result = a + b;
        screen.show(result);
        return result;
    }

    double multiply(double a, double b) {
        double result = a * b;
        screen.show(result);
        return result;
    }
};

int main() {
    Calculator calc;
    calc.add(5, 3);
    calc.multiply(4, 2);
    return 0;
}