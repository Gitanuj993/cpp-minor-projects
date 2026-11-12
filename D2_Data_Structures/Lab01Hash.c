//#include <iostream.h>
// Aim : program to create hash table and handle the collisions via linear probing method in clang
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define max 10 

int main(int argc, char *argv[])
{
	//int i ; // for for-loop
	int num ; // for elements
	int A[max] ; // Hash table or Array declearation
	int key ; // key to store haskKey
	char ans ;
	// function delclearation
	int hashKey(int) ;
	void linear_probing(int []  , int , int ) , display(int []) ; // two declearations
	
	clrscr() ; // to clear previous screen	
	// set all  empty index to -1 
	for ( int i = 0 ; i < max ; i++)	
	A[i] = -1 ;
	printf(" Collision Handling by linear Probing ... \n") ;
	
	do {
	    printf(" Enter the number :  ") ;
	    scanf("%d" , &num) ; 
	    key = hashKey(num) ;
	    linear_probing(A , key ,  num) ; // performe main action
	    printf( " Do you want to continue ( 1 / 0 )    :  ") ; // ask for continuity	 
	    scanf("%d" , &ans)  ;
}	    while  ( ans !=0) ; // base case
        display(A) ; // display the results
        getch() ;
	
	return 0 ;
}
// hash key 
int hashKey(int num)
{
    int key = num % 10 ;
    return key ;
}
// linear-probing
void linear_probing( int A[max] , int key , int num)
{
    void display(int []) ;
    // data members 
    bool isInserted = false ; // to check whether num is inserted or not 
    int count = 0 ; // to count number of nonEmpty spaces or indices {index}
    
    if ( A[key] == -1)
    { A[key] = num ;  } // if  space or key is empty
    /// if not 
else {
        for(  int i = 0 ; i < max ; i++) // you can also choose while-loop
        {
             if ( A[i] != -1) count++ ; // count Non Empty indices
            
        }
        // to check hash table - if list is full
        if ( count == max)
        { printf(" Hash table is full !") ; 
        display(A) ; // to use it , we should declear it in the function 
        getch() ;        exit(1) ; 
        }
        // Now we should insert the num in the next empty indices  to reslove collison
        for ( int i = key + 1 ; i < max ; i++) // key +1 :    to exlude key indice         
        {
            if ( A[i] == -1)
            {    A[i] =  num ; isInserted = true ; break ; } 
        }
        // if no empty space found in indices after key
        // than we should check in the prior indices
        for ( int i = 0 ; i < key && isInserted == false ; i++)
        {
             if (    A[i] == -1)
             {   A[i] = num ; isInserted = true ; break ; return ; }
        }
    } // else 
} // void 

void display(int A[max])
{
        printf("\n") ;
        for ( int i = 0 ; i < max ; i++)
        { printf(" %d is %d  \n" , i+1 , A[i] ) ; }
}                                                                                         