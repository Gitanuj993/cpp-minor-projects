#include<iostream>
using namespace std ;
class base 
{
    public :
    void work()
    { cout <<" work done 1 \n" ;}
};
class derieved : public base
{
    public :
    base b ;
    void done()
    { b.work(); }
    
    
};
int main(int argc, char *argv[])
{
	derieved d ;
	d.done() ;
	d.b ; // ? why run ? why dont throw an Error !
	return 0 ;
}