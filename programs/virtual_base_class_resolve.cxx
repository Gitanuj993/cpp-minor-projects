#include <iostream>
using namespace std ;
class A
{
	public :
	void show(){
		cout<<".   class A"<<endl;}
	
	
};
class B :  virtual public A
{
	public :
			
};
class C :  public virtual A
{
	public :
	
	
};
class D : public B , public C
{
	public :
	
};






int main(int argc, char *argv[])
{
	D d;
	d.show();
	return 0;
}