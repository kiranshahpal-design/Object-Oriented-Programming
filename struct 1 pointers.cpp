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
	Student s[5];
	Student *ptr =s;
	for(int i=0;i<5;i++)
	{
		cout<<"Enter data for student"<<i+1<<endl;
		cout<<"First name:";
		cin>>(ptr+i)->first_name;
		cout<< "lastname:";
		cin>>(ptr+i)->last_name;
		cout<<"roll_number:";
		cin>>(ptr+i)->roll_number;
		cout<<"marks:";
		cin>>(ptr+i)->marks;
		cout<<endl;
	}
	cout<<"\n Student Information\n";
	for(int i=0;i<5;i++)
	{
		(ptr+i)->displaystudentinfo();
	}
	return 0;
}