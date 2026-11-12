#include <iostream>
using namespace std ;

int* create(int term)
{
     int a[term];
for ( int i = 0 ; i<term ; i++)
{ cout << "Enter the term " << i+1 << " : ";
cin >> a[i];
}
int * ptr = a ;   
return ptr ;
}

int main()
{  int term ;
cout << "Enter the number of terms :";
cin >> term;
int * pointer = create(term);
cout << pointer[0+1] << endl;

for ( int i  = 0 ; i<3 ; i ++)
cout << pointer[i] <<endl;
// why garbage valus are showing 
return 0 ;
}
