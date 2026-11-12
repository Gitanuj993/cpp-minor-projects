// Hacker rank challenge - easy level - box it
// there is a class named box having 3 private members , length , bredth and height .and have two  constructors , one of them is default constructor whick set l=b=h=0 , parameterized constructor sets the value into the object's class.
// class have 4 functions all of them are return type fuctions

// class have getlen() , int get_bredth() , int get_height() ; int getVolume() ;
// create two objects pass the value , check which of them is greater ,
// no three variables would be equal .
// data members should greater than 0 and less than or equal to 10^5 ;
// one object is greater than other say A > B' if (A.l > B.l ) or ((A.b > B.b) && (A.l == B.l ))or
// ((A.h > B.h) && ((A.l == B.l )or ( A.b == B.b )))

#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

class box
{
  private:
    // data members
    int l, b, h;

  public:
    // default constructor
    box()
    {
        // set l,b and h to 0
        l = b = h = 0;
    } // box-end
    // parameterized constructor
    box(int len, int breadth, int height) // sets the value of the data members
    {
        //  practicing constraints
        if ((len > 0 && len < 100000) && (breadth > 0 && breadth < 100000) && (height < 0 && height < 100000))
        {
            l = len;
            b = breadth;
            h = height;
        } // if-end
        else
        {
            cout << "  Segmentation fault !\n  ";
        } // else-end
    }     // box2-end

    // geter functions which has a int return type
    int get_len()
    {
        return l;
    }
    int get_breadth()
    {
        return b;
    }
    int get_height()
    {
        return h;
    }
    // get volume
    int get_volume()
    {
        return l * b * h;
    }

}; // class-end

//  main() function
int main(int argc ,  char * strings[])
{
    box A ;
    // to be continued 
    
    return 0 ;
}


