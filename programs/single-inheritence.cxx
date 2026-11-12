#include <iostream>
using namespace std;

class base
{
	public:
	base() {
		cout << " This is the constructor of base class!	\n";}
		
	
};

class derived : public base
{
	public :
	/*derived() : base()
	{ cout << " This is the constructor  of Derived class!!\n"; }
	*/
	
};
int main(int argc, char *argv[])
{
	derived d;
	return 0;
}