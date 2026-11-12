#include <iostream>
#include <cstdlib>
using namespace std ;

// Creating binary Search Tree

typedef struct bst
{ int data ;
bst * left ;
bst * right ;
}    * node ;

node get_node(int val ) 
{ 
    node temp = new bst ;
    temp -> data  = val ;
    temp -> left  = temp -> right = NULL ;   
    return temp ;
}

void insert(node root , node New)
{
    if ( New -> data < root->data)
    {
         if ( root->left == NULL)   
         root -> left = New ;
         else {    insert(root->left , New) ; }
    }
    else if (    New-> data > root->data)
    {  
        if ( root-> right == NULL)
        root->right = New ;
        else {    insert(root-> right , New) ; }
    }
    else {    cout <<    " Duplicate data ignored ! \n" ; }
}

node createBST( node root)
{
    int arr[10] ;
    int terms ; 
    node New ;
    cout << "Size should less than 10 \n Enter number of terms :    " ; cin >> terms ;
    for ( int i = 0 ; i <    terms  ;  i++)
    { cout << " Enter value " << i+1 << " : " ; cin >> arr[i] ; }
    
    for ( int i = 0 ; i <    terms  ; i++ )
    {           
           New = get_node(arr[i]) ;
           if ( root == NULL)
           root = New ;
           else {
           insert(root,New) ;
           }
     }        
     cout << " Binary Search Tree Creataed  ! \n";
     return root ;
}
void inorder(node root )
{ 
    if ( root != NULL)
    {
         inorder(root->left);
         cout << root->data <<    " " ;
         inorder(root->right) ;
    }
}


int main()
{
    int choice ;
    node root  = NULL ;
    while (    true )
    { cout <<    " \n 1. create Binary Search Tree \n 2. Display  \n11. Exit " ;
    cout << " ------>    Enter Your Choice :    " ; cin >> choice ;
    switch(choice)
    {
     case 1 :
     if (root!= NULL)
     { free(root) ; } root =  createBST(root)   ; break ;
     case 2 : 
     if ( root == NULL) { cout <<    " Tree is Empty ! \n"; }
     inorder(root) ; break ;
     case 11 : exit(0) ;
     default :    cout <<    " Try again : " ;      
    }
    }
    return 0 ;
}