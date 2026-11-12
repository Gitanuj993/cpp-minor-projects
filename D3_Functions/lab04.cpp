// Functions with cpp
// Lab 04 :  Return by referneces

// problem :   is we change the value of a variable using references while returning by references ;
#include <iostream>
int &max(int &x, int &y) // delclear it as and define it without using &
{
    if (x > y)
        return x;
    else
    {
        return y;
    }
}

int main(int argc, char *argv[])
{
    int x = 8, y = 9;
    std::cout << "    x : " << x << " y :  " << y << std::endl;
    max(x, y) = -1;
    std::cout << "    x : " << x << " y :  " << y << std::endl;
    return 0;
}