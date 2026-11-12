#include <iostream>
// Introduction to Classes and Objects.
class baseClass
{
    public :
    void classFunction1()
        { std::cout << " This is the class Function called by object of the class.\n"; }
     void classFunction2()
         { std::cout  << " This is the Second or another function of the class."; }
};
int main()
    {
        baseClass obj ;
        obj.classFunction1();
        obj.classFunction2();
        return 0 ;
    }
        