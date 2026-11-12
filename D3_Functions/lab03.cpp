// Function in cpp
// lab03 : call by references 

// problem :    Whenever a function is called it makes or creates a seperate copy of variables thus changing this variable do not affect the original one , 
// we need to change the original data using functons even in seperate variables .

// Sol. it is achived by passing refrences of variables in the arguements inside a function heading

#include <iostream>
void change( int & num) 
{ num = 100 ; }

int main(int argc, char *argv[])
{
    int num1 = 99 ;
    std::cout << " Num  is " <<    num1 << std::endl;
    change(num1) ;
    std::cout << " Num  is " <<    num1 ;    
    return 0 ;	
}