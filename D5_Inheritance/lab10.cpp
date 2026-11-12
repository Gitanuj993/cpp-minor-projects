// lab10 : pure virtual function and abstract class
// blueprint , trait

#include <iostream>

class base 
{
    public :
    
    virtual void details() = 0 ;
    
};

class child : public base
{
    public :
    void details()
    {
        std::cout<<" this is the of that type for that class \n" ;
    }
};




int main(int argc, char *argv[])
{
//	base b ; // we couldn't create an object of abstract class 
	child obj ;
	base * ptr = &obj ;
	ptr->details();
	
}

//we couldn't create an object of abstract class but the functions of that class is inherited by its derieved classes .'