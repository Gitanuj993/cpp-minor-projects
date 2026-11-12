#include <iostream>

class Area
{
    double l, b;
    public :
    double areaOfRect(double l  , double b)
        {
        /* this l = l;
        this b = b ; */
        double area =  l*b;
        return area ;
        }
    void showArea( double area)
        {
            std::cout << " Area of Rectangle is : " <<area;
        }
};

int main()
    {
        Area a;
     //   double area = a.areaOfRect(5,4);
      //  a.showArea(area);
      a.showArea(a.areaOfRect(4,5));
        return 0 ;
    }
        
        