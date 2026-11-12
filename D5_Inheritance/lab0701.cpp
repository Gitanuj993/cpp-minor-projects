#include <iostream>
using namespace std ;
// Aim : default parameters !!!
// different name of parameter in declearation and defination 
class A 
{ 


public : 

void work(bool t = true ) ;

};

void A::work(bool t )
{
    cout << "     ->  "<< t; 
}



int main(int argc, char *argv[])
{
	A a ;
	a.work() ;
	return 0 ;
}