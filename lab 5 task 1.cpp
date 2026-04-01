#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    void display_person_info() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
private:
    string student_id;
public:
    void get_data() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter student ID: ";
        cin.ignore();
        getline(cin, student_id);
    }
    void display_student_info() {
        display_person_info();
        cout << "Student ID: " << student_id << endl;
    }
};

int main() {
    Student s;
    s.get_data();
    s.display_student_info();
    return 0;
}