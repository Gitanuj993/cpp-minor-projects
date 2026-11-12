// Learning about structure !!!
#include <iostream>
using namespace std ;

struct date{
	int day;
	int month;
	int year;
}dt;
struct address{
		char add1[20];
		char city[20];
		char state[29];
}add;
		
	

struct students{
	int roll_no;
	char name[19];
	char hobby[29];
	struct date dt;
	struct address add;

}std1,std2;

int main()
{
	cout<<"Enter roll_no : ";
	cin>> std1.roll_no;
	cout<<"Enter name :";
	cin>>std1.name;
	cout<<"Enter student's hobby :";
	cin>>std1.hobby;
	cout<< "Enter students city:";
	cin>>std1.add.city;
	cout << "Enter Student's State name :";
	cin >> std1.add.state;
	cout << "Enter Student's address1 :";
	cin >> std1.add.add1;
	cout << "Student's date-of-birth date followed by space :";
	cin >> std1.dt.day>> std1.dt.month >> std1.dt.year;
	
	cout<<"------------------------------------------------------------------------------------=\n";
	cout<<"Student's Roll_no is :"<<std1.roll_no<<endl;
	cout<<"Student's Name :"<<std1.name<<endl;
	cout<<"Student's Hobby :"<<std1.hobby<<endl;
	cout<<"Student's City :"<<std1.add.city<<endl;
	cout << " Student's DOB :"<<std1.dt.day<<std1.dt.month<<std1.dt.year;
	return 0;
}
// We have done use of structure 
// Now we will learn about Nested Structure!!!