#include <iostream>
using namespace std ;

void testCaseProcess(int t)
    {
         while (t --)   
         {
              float a,b,c ;
              cout << "Enter Sample Space :"; 
              cin>>a>>b>>c ;
              if ( a>= 1 && b>=1 && c >=1 &&  a<=10 && b <= 10 && c <=10 )
              {
                  if (    a + b > 2*c)   
                  {cout << " Yes" << endl ;}
                  else 
                  {cout <<    " NO" <<  endl ;}
              }
              else {    break ;}
         }
         
    }
    
    int main()
        {
             int totalCase ;
             cout << " Enter Number of test Cases :";
             cin>>totalCase ;
             if ( totalCase <=1000 && totalCase>=1)   
             testCaseProcess(totalCase);
             return 0 ;
        }
        
        // Solved by self ..