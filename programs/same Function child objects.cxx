#include <iostream>
using namespace std ;

class Base
{
	public :
	void show()
	{cout<<"This is class A \n";}
	
};

class Child : public Base
{
	public :
	void show()
	{ cout<<"This is Child class!!\n";}
	        
	
};


int main(int argc, char *argv[])
{
	
	Child c;
	c.show();
	

	return 0 ;
}