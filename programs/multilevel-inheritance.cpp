// Multilevel inheritance
// Main  Reason behind it is code reusability!!!
#include <iostream>
using namespace std;

class vehicle  // this is the base class and indirect parent of class tvs & it is a indipendent class
{
	public :
	vehicle()
	{ cout << " Its the base class!"<<endl; }
};
class two_wheeler : public vehicle // this is child class of class 'parent' and direct class of 'tvs'!!1
{
	public :
	two_wheeler()
	{
		cout << "Its a two wheeler class"<<endl;
	}
};
class tvs :public two_wheeler   // this is the child class of two_wheeler and indirect child of class 'vehicle' !!
{
	public :
	tvs()
	{
		cout << " This is the derived class of the derived class two-wheeler !!"<<endl;
	}
};

int main()
{
	tvs t;
	return 0;
}
	

