#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float width;

public:
    Rectangle() {
        length = 1.0;
        width = 1.0;
    }

    Rectangle(float l, float w) {
        length = l;
        width = w;
    }

    Rectangle(float s) {
        length = s;
        width = s;
    }

    float area() {
        return length * width;
    }

    void display() {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Area: " << area() << endl;
    }
};

int main() {
    Rectangle r1;
    Rectangle r2(5, 3);
    Rectangle r3(4);

    r1.display();
    cout << endl;
    r2.display();
    cout << endl;
    r3.display();

    return 0;
}