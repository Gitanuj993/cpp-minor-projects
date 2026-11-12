//
// Problem is array of size 10 is given, Some of them are occupied , you task is to know number of occupied places !

#include <iostream>
using namespace std ;

int main()
{
    int a[10]  = { 0,1,2,3,4,5,6,0 } ;
    int len = sizeof(a)/sizeof(a[0]);
    cout << " size of Array is :" << len<<endl ; // size of Array is 10 which is its Max size !
    // if i take a loop to show all the elements in the array then
    for ( int i = 0 ; i < len ; i ++)
    { cout << a[i] <<"    " ;}
cout <<endl ;
// custom algorithm to know the number of elemtents  stored in the array !

    
    return 0;
}