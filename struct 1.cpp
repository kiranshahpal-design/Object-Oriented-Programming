#include<iostream>
#include<string>
using namespace std;
struct Student 
{
  string first_name;
  string last_name;
  int roll_number;
  int marks;	
  void displaystudentinfo()
  {
  	cout<<"first_name"<<""<<"last_name"<<endl;
  	cout<<"roll_number:"<<roll_number<<endl;
  	cout<<"marks:"<<marks<<endl;
  	
  }
};
int main()
{
	Student s1;
	s1.first_name="Kiran";
	s1.last_name="shahpal";
	s1.roll_number=13;
	s1.marks=70;
	s1.displaystudentinfo();
	return 0;
}