
// Aim :  Creating pointer of derieved class of base class type & Is this ptr access data member of derieved class or not 
// 2. Both classes have same function name 
#include <iostream>
using namespace std ;

class BC 
{
    public : 
    int b ;
    void show()
    { cout << " b : "<< b << endl ; }
    
};
class DC : public BC 
{
    public :
    int d ; 
    void show()
    {
        cout << " b = " << b <<endl 
        << " d = "<< d << endl ;
    }
};
    

int main(int argc, char *argv[])
{
	BC * bptr ;
	BC base ;
	bptr = & base ;
	bptr->b= 100 ;
//	bptr->show(); // it run show of base class bptr is the ptr of base class
	
// what if we try to put value of d ?
//bptr -> d = 200 ; it didn't work error " d isn't member of BC

  DC derieved ;
  bptr = & derieved ;
  bptr -> b = 200 ;
  bptr -> show() ;
  //
//   bptr -> d = 300 ; // same error 
derieved . show(); // . would run 

// accessing d ; how can we access 
((DC *)bptr)-> d = 400 ; // cast or conversion to DC type
((DC * )bptr) -> show();
// ((*DC) bptr)-> show() // wouldn't work as * is written behind DC '
	
	return 0 ;
	
}

/*
We learn about pointers of objects of base and derieved class 
*/



