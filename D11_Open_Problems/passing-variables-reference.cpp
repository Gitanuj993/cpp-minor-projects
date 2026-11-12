// Purpose : Changing  value of a variable using references.
// References are similar to pointers  
// References basically pointers wearing poilite cloths .
#include <iostream>
using namespace std ;

void sint(int &n)
{
    n = 10 ;       
}

int main()
{
    int n ;
    sint(n) ;
    cout << "--> " << n ;
    return 0  ;
}