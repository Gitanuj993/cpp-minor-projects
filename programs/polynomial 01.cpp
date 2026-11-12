#include <iostream>
#define MAX 20
using namespace std ;
// Adding of Two polynomials ...

typedef struct poly {
    int coef ;
    int exp ;
}p;

//  Declearation of polynomial 
p p1[MAX] , p2[MAX], p3[MAX] ;

// Insert function  which takes a polynomail and return its Number of Terms !
int insert(p p[MAX]);
// Printing the Polynomial  which takes parameter as polynomial and its Number of Terms !
void print(p p[MAX] , int );
// Adding Two polynomial : take parameter as poly1 ,poly2 , poly3 and its number of Terms ! adn return Number of Terms of the new polynomial
int add(p p1[MAX], p p2[MAX], p p3[MAX], int , int ) ;




int main()
    {
        // Declearation of Number of Terms
        int t1, t2 , t3 ;
        cout << " Enter the polynimial 1 !"<<endl;
        // Inserting ppoly 1 
        t1 = insert(p1) ;
        // print polynomial 1 
        print(p1,t1)    ;
        // Insert polynomial 2
        cout<<endl<<" Now inserting polynomil 2 !\n";
        t2 = insert(p2) ;
        // Print polynomial 2
        print(p2,t2);
        char ch ;
        cout << " Want to  Add Poly(s) (y/n) :";
        cin >>ch;
        if (ch =='y')
        {
        
        // Addint 2 polynimials
        t3 = add(p1,p2,p3,t1,t2) ;
        // print New polynomial 3 !
        print(p3,t3);
        }
        else { exit(0);}
        return 0 ;
    }
    
int insert(p p[MAX])    
    {
        int terms ;
        cout << "Enter Number of Terms in the poly :";
        cin >>  terms ;
        cout << "Enter coeficient and exponent  in Descending Order !"<<endl;
        int coef[terms];
        int exp[terms];
        for ( int i  = 0 ; i < terms ; i++)
            {    cout << " Enter : ";
                cin >> p[i].coef >> p[i].exp ; 
                coef[i] = p[i].coef;
                exp[i] = p[i].exp ;
                        }
                 for (int i = 0 ; i<terms ;i++ )
                 {
                     for (int j = terms ; j<0 ; j++){if (exp[i] == exp[j] && i != j)
                     {p[i].coef = coef[i] + coef[j] ;  }
                     }
                 }
               cout <<endl;            
          return terms ;
        }
        
int add(p p1[MAX] , p p2[MAX] , p p3[MAX], int t1 , int  t2)        
        {
           // i j k  are the iterators for the three polynomial
           int i , j, k;
           i=j=k= 0 ;
           while ( i <t1 && j < t2)                                                                     
               {   if ( p1[i].exp == p2[j].exp )
                       {  p3[i].exp = p1[i].exp ;
                           p3[k].coef = p1[i].coef + p2[j].coef ;                                                         
                           i++;j++;k++;
                       }   
             else  if ( p1[i].exp < p2[j].exp )
                    { p3[k].coef = p2[j].coef ;
                        p3[j].exp = p2[j].exp ;
                           j++;k++;
                           }
              else if (p1[i].exp > p2[j].exp)
                           {
                      p3[k].coef = p1[i].coef ;
                      p3[k].exp = p1[i].exp;
                               i++;k++;
                           }
                   
               }
               while ( i < t1)
               { p3[k].exp = p1[i].exp ;
               p3[k].coef = p1[i].coef ;
               i++;k++;
               }
               while (j<t2)
                 { p3[k].coef = p2[j].coef ;
                    p3[k].exp = p2[j].exp ;
                    j++; k++;
                 }
                return k ;            
        }

void print(p p[MAX] , int terms )                
    {
       cout << endl << " ------------------------------------||------------------------------------------"<<endl;
        cout << "                    ";
        for ( int i = 0 ; i<terms ; i++) 
            {
                cout << p[i].coef << "X^" << p[i].exp ;
                if (i < terms - 1)
                { cout << " + " ; } 
            }
                    cout << endl << " ------------------------------------||------------------------------------------"<<endl;
    
       }

/* Logs 
 0.0 : Code is ready to compile , status : undebugged 
 0.1 :  output is anappropriate

*/