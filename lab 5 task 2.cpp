#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    void get_person() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
    }
    void display_person() {
        cout << "Name: " << name << "\nAge: " << age << endl;
    }
};

class Employee : public Person {
protected:
    string employee_id;
public:
    void get_employee() {
        get_person();
        cout << "Enter Employee ID: ";
        cin.ignore();
        getline(cin, employee_id);
    }
    void display_employee() {
        display_person();
        cout << "Employee ID: " << employee_id << endl;
    }
};

class Manager : public Employee {
private:
    string department;
public:
    void get_manager() {
        get_employee();
        cout << "Enter Department: ";
        getline(cin, department);
    }
    void display_manager() {
        display_employee();
        cout << "Department: " << department << endl;
    }
};

int main() {
    Manager m;
    m.get_manager();
    m.display_manager();
    return 0;
}