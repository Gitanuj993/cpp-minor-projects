
// program to show an example of single inheritance 
// Header-file with preprocessor and library!
#include <iostream> 
using namespace std;
class parent   // Declaration of the class 
{ public :  // Access specifier of the class , here public enabled  access for the object
parent()    // This is constructor of the class , it will automatically called when object of the class or object of it'd derived class !'
{ cout << "This is parent function !!!\n";}
};
class child : public parent // declearation of the class as child of parent class. as public
{public:
child()
{ cout << "This is child constructor !!"<<endl;}
};

int main()  // Main function , compiler search for it  as it will execute first
{
	child c; // class and its object declearation
	return 0; // return value zero or nothing as we defined the main function as int
}

