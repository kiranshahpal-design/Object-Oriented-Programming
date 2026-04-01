#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    string name;
    double salary;
public:
    void get_base_data() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter salary: ";
        cin >> salary;
        cin.ignore();
    }
    void display_employee() {
        cout << "Name: " << name << "\nSalary: " << salary << endl;
    }
};

class Developer : public Employee {
private:
    string programming_language;
public:
    void get_dev_data() {
        get_base_data();
        cout << "Enter programming language: ";
        getline(cin, programming_language);
    }
    void display_developer() {
        display_employee();
        cout << "Language: " << programming_language << endl;
    }
};

class Designer : public Employee {
private:
    string design_tool;
public:
    void get_design_data() {
        get_base_data();
        cout << "Enter design tool: ";
        getline(cin, design_tool);
    }
    void display_designer() {
        display_employee();
        cout << "Tool: " << design_tool << endl;
    }
};

int main() {
    Developer dev;
    Designer des;
    
    dev.get_dev_data();
    des.get_design_data();
    
    dev.display_developer();
    des.display_designer();
    
    return 0;
}