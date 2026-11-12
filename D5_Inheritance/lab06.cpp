#include <iostream>

using namespace std ;
// Aim : using Array of objects using pointers  //
// why didn't we create array of objects  

class office 
{
    protected :
    long int empId ;
 //   char empName[30] ;
    
    public : 
    
    void setId( int id = 0000 )
    {
        empId = id ; 
      //  empName = name ;
    }
};
                             
class Accounts  : public office
{ 

public : 


void salary(bool t = true )  
{ cout <<" it would work !!! \n" ;
}

};
class employee : public Accounts 
{
    public :
  
    void showName()
    {
  //  { cout << " name is : " << empName <<endl ;
    cout << " id is : " << empId << endl ;
    }
};
    

int main(int argc, char *argv[])
{	
employee * obj = new employee[2] ;
obj[0].setId(1) ;
obj[1].setId(2) ;
obj[1].showName();
obj[0].showName();
return 0 ;
	
}