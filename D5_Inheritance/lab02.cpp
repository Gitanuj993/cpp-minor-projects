#include <iostream>
// Aim : use the function with ambiguity , 
// To call the ambiguity fuction of Base class using scopeResolution ' :: '
// ambigity 
class Base
{
      public :    
    int data ;  
    void display()
    { std :: cout << " class Base " << data <<std::endl   ; }
};
//Base ::    data = 3 ; we cant define non-static member outside 
class Child : public Base 
{
    public :
    void display()
    { std :: cout << " class child ! \n" ; }
};
int main(int argc, char *argv[])
{
	Child c ;
	c.display() ;
	c.Base::data = 3 ; // we can delcear it here , through object of child class
//	Base::display() ; non static member can't called without object
c.Base::display() ;
c.Child::display() ;
	return 0 ;
	
}
/*
what is scope Resolution
it defines the relation between class and their data members of data functions !
*/