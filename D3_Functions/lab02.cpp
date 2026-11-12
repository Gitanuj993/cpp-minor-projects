// Aim : functions in cpp
// lab02 :    inline functions

// problem :    using a functoin many times could solve the space morever it increase the executions time as a result of increasig of number of steps  . like jumping to the functions, executing series of instructions , saving registers and pushing arguements into the stack and return to the calling function .

// Problem might be solved using macros but they are not really a functions thus compiler ignore error checking while compilation

// More sutiable solution is solved via using inline functions !!! as follow

#include <iostream>

inline int square(int num) ;
inline int square(int num )
{
    return num*num ;
}

int main(int argc, char *argv[])
{
    std::cout << " Square is :    " <<    square(5)  << std::endl ;	
        std::cout << " Square is :    " <<    square(2.5 + 2.5) ;	
}

/*
inline functions execute faster than normal functions , 
we can make a function inline after using 'inline' keyword before the function heading
or function declearation.

Q. What is an inline functions ?
inline function is expand in one line when invoked .

Benefits of inline functions 
1. Faster execution

inline function sends  a request  not a command
inline funciton fail when size of function increases 

Q. in what cases when inline expansion may not work ?
1. If function has a return type 
2. Function consist of for-loop , while-loop , switch-cases and go-to functions.
3. For function not returning any value but return statement exists.
4. If a function contains a static variables.
5. If inline functions are recursive .


*/

