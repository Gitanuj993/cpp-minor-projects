// Function defines the use of  virtual class it used when we have to use a function which is in the indirect class , and the derived class has two direct parents.
// thus these two direct function has the access of required function which confuses the compiler to  call the function from which class?
#include <iostream>
using namespace std;
class Base
{
    public :
    void function()
    { cout << " I am the function which is to be called ! you won!\n";
      }
    };  
  class parent1 : public virtual Base // we can make base class by adding 'virtual' keyword before or after keyword 'public'
  {
      public :
  };
  class parent2 : virtual  public Base
  {
      public:
  };
  
  class Derived : public parent1, public parent2
  {
      public:
  };
  
  int main()
  {
      Derived d;
      d.function();
      return 0;
  }
  
  // if we can't declear the 'Base' class virtual then we will encouter ambiguous Error
  
  
  