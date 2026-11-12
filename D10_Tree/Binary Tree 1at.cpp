#include <iostream>
using namespace std ;
typedef struct bin
{
    int data ; 
    bin * left ;
    bin * right ;
} * node ;

void preorder( node root )
{
     if ( root != NULL)   
     {
          cout << root -> data << " " ;
          preorder(root->left);
          preorder(root-> right);
     }
}

node getNode()
{
     node temp = new bin ;
     cout << " Enter value :    " ; cin >> temp -> data ;
     temp -> left = temp -> right = nullptr ;
     return temp ;         
}

node createBin(node root)
{
     node temp , New ;
     temp = New = NULL ;    
     if ( root == NULL)
     { New = getNode() ; root = temp = New ;}
     else {
          char ans ;
          cout << "Do You Want Enter Element at left side  ( y / n ) :  "   ; cin>> ans ;
          if ( ans =='y')
          { 
              New = getNode() ;
              root -> left = New ; cout << "Inserted ! \n" ;
          }
          else 
          {
               New = getNode() ;
               root -> right = New;    
                cout << "Inserted ! \n" ;
          }
     }
         
    char ch ; cout << " Do you want to see the changes : ( y / n )  : " ; cin >>    ch ;
    if ( ch == 'y')
    {
            preorder(root) ;
    }
    return root ;
}


int main()
{ 
node root = NULL;
while ( true )
{root = createBin(root) ; }
return 0 ;
}
    