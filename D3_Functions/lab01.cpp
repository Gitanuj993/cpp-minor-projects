// Aim functons in cpp theory ! 
// lab  01 of  functions :    
#include <iostream>

// declearation of function
void print( int ) ; 
 int square(int num)  ;

 int main(int argc , char * string[]) ;
// main fumction with return 0 
int  main(int argc, char *argv[])
{
	int num = 25 ;
	int value = square(num) ;
	std::cout << " Square of " << num << " is " <<    value << std::endl ;
    print(8) ;
    return 0 ;    		
}

void print(int num)
{ std::cout << " You  Enterd " <<num << std::endl ; }

int square(int num)
{
    return num*num ;
}

/*

1. Declearation is the backbone of function prototyping in which a template or interface is provided to the compitor for fast execution !

2. it is used in top to bottom approach 
3. we can rerurn 0 in the main function to ensure the working of main program
by the OS operating system.



*/