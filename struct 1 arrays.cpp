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
	for(int i=0;i<5;i++)
	{
		cout<<"Enter data for student"<<i+1<<endl;
		cout<<"First name:";
		cin>>s[i].first_name;
		cout<< "lastname:";
		cin>>s[i].last_name;
		cout<<"roll_number:";
		cin>>s[i].roll_number;
		cout<<"marks:";
		cin>>s[i].marks;
		cout<<endl;
	}
	cout<<"\n Student Information\n";
	for(int i=0;i<5;i++)
	{
		s[i].displaystudentinfo();
	}
	return 0;
}