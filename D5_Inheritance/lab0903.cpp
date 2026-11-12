// lab 0903 : v test 

// virtual function as a friend function

#include <iostream>
using namespace std ;
/*
class C
{
    public :
    friend void work() ; 
    
};

void work()
{
    cout << " this is friend function/n";
    
}
*/

class A
{
    public :
  virtual   void work()
    { cout << " Base class A \n";}
    
};
class B : public A
{
    public :
    
    void work()
    { cout << " Work Done ! \n" ;}
    
};


int main(int argc, char *argv[])
{
//	B b ; 
//	B *bptr =&b ;
//	bptr->work();//b.work();
	A * a ;
	//C * c ; 
	B * b;
	A * dptr = b ; // run 
	// A *dptr = &b;
	
//	dptr->work(); // won't worl if A * dptr = b and B *b 

	
	
}

// if you decleared a virtual function in a class and created a pointer of that class and didnt point it to the derieved class than 
// you will face an segmentation error