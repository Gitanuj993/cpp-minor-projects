// Its is the example of simple virtual functon!
// We can create object of the class in whih 'virtual' keyword is used!

#include <iostream>
using namespace std;

class Base
{
	public :
virtual	void show() // virtual function made function unavailable to the ponter
	{
		cout << "This is the function of  Base class! \n ";
	}
};

class Derived : public Base
{
	public:
	void show()
	{
		cout << " Derived class function!\n";
	}
};

int main()
{
	Derived d;
	d.show();
	d.Base::show();
	Base *p;
	p=&d;
    p->show();
	return 0;
}

