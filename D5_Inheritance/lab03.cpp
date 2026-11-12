#include <iostream>

class base1 
{
    int numBase1 ;
    public : 
    base1 (int num) { numBase1 = num ; std::cout<<"class base1 initialised\n" ; }
    void putBase1()
    {
        std :: cout << " num is :    " << numBase1 <<std::endl ; }
} ;

class base2
{
    private :
    int num;
    public :
    base2(int x ) :    num(x) 
    { std::cout << "    base 2 initialised !\n" ; }
     void putBase2()
    {
        std :: cout << " num is :    " << num <<std::endl ; }
};
class child : public base2 , public base1
{
    int num ;
    public :
    child ( int x , int y ) :    base1(x+y) , base2(x*y) { std::cout << " child initialised!\n";
    num = x+x+y+y ;
    }
    void put()
    { std :: cout << " num : " << num << std :: endl ; }
};
    
    


int main(int argc, char *argv[])
{
	child c( 1,2) ;
	c.putBase1() ;
	c.putBase2() ;
	c.put() ;
	
	return 0 ;
	
}