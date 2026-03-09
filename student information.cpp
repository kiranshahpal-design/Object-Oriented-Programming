#include<iostream>
using namespace std;
class Student
{
	public :
	 string name;
	 int roll_number;
	 float marks;
	void getData()
	{
		cout<<"enter name";
		cin>>name;
		cout<<"ENTER rollnumber";
		cin>>roll_number;
		cout<<"enter marks";
		cin>>marks;
		}	
	void displayData()
	{
	    cout<<"Student Information";
		cout<<"Name:"<<name<<endl;
		cout<<"Roll_Number:"<<roll_number<<endl;
		cout<<"Marks:"<<marks<<endl;
	}
};
int main()
{
	Student s1;
	s1.getData();
	s1.displayData();
	return 0;
}