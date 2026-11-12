#include <iostream>
using namespace std ;

typedef struct SLL 
{ int data ;
SLL * next ;
} * node ;

// i will create Sorting Algorithm next time ..


node getNode()
{
     node temp = new SLL ;
     cout << "Enter Value : " ; cin>> temp -> data ;
     temp -> next = nullptr ;
     return temp ;
}

node createSLL( node head , int terms)
{ node temp , New ;
temp = New = NULL ;
bool first =  true ;
for ( int i = 0 ; i < terms ; i ++)
{
     New = getNode() ;
    if ( first)
    { 
    head = temp = New ;
    first = false ; 
    }
    else {
    temp -> next = New ;
    temp = New ;
    }  
}
cout << " Singly LInked List Is created ! \n" ;
return head ;
}
void show( node head)
{
  
   node temp = head ;
     cout << " ------- > [ " ;
     while ( temp != NULL)
     { cout <<  temp -> data << " " ;
     temp = temp -> next ;
     } cout << "]" ;
}

   void menu()
   {
    cout << " \n 1. Creat List \n 2. Show List \n"   ;
     }   

int main()
{
    node head = nullptr ;
    int choice ;
    while ( true)
    {
         int terms ;
         menu() ;
         cout << " Enter Your Choice : " ; cin >>    choice ;
         switch(choice) 
         {
           case 1 : {
                    cout << " Enter Number of Terms : " ; cin >> terms ; 
                    head = createSLL(head,terms) ; break ; }
           case 2 : { show(head)  ; break ; }
           case 11 : { exit(0) ;  }
          default :  " try again :    ";
            
         }
            
    }
return 0 ;
}



