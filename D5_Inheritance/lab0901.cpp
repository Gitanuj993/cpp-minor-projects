// Lab 0901 : virtual functions
// a virtual function migh be a friend function of another class ! in next lab

#include <iostream>
using namespace std;

class Base
{
  public:
  virtual void show()
    {
        cout << " Base class \n";
    }
};
class Child1 : public Base
{
    public :
    
    void show() 
    {
        cout << " Derievrd class \n ";
        
    }
};

int main(int argc, char *argv[])
{
    // creating a base class pointer which points to the derieved class
    Child1 c1 ;
    Base *ptr = &c1;
    ptr->show();
}

// do not use function overloading - - ----next lab