#include <iostream>

class Factorial
{
    int resFact=1;
    public :
    void factLogic(int f)
        {
            resFact*=f;  
            
        }
        
       void fact(int n)
       {

           for ( int i = 1 ; i<=n ; i++ )
               {
                   factLogic(i);                                           
               }
              std :: cout << " Factorial is : " << resFact ;
       }
};

int main()
    {
        Factorial f;
        int n;
        std::cout << " Enter Integer to calculate it's Factorial :";
        std::cin >>n;
        f.fact(n);
        return 0  ;
    }

  
           