#include <iostream>
using namespace std ;

void sint(int * n)
{ *n = 5 ;  cout << " pointer n : " << *n << endl ;}
int main()
{ // i want to change  or to make change in the n , directly from the address of the variable
    int n ;
    sint(&n) ;
    cout << n ;
    return 0 ;
}
// can i do it without pointers , only using &