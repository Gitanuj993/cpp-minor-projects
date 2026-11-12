#include <iostream>
using namespace std;
class Area // This is the Abstract class becouse pure virtual function is used 
{                        // so we can't create its object but  can call the other function using  '
    public:                // object of base class
    virtual void area()=0;
    void otherfunction()
    {
        cout << "\n I am another function other than pure virtual function , you can call me the object of my derived class! \n";
    }
    
};
class square : public Area
{
    public :
    void area()
    {
        cout<<" area of Square is side*side\n";
    }
};
class Rectangle  : public Area
{
    public :
    void area()
    {
        cout << " Area of Rectangle is Length * Breadth !";
    }
};
int main()
{
        square s;
        s.area();
        Rectangle r;
        r.area();
        r.otherfunction();
        return 0;
}
        
    
    
        