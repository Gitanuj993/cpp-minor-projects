// aim :    2d array  we take input from the user and display the results 
#include <iostream>
#include <stdio.h>


using namespace std ;
 
class array2D
{
    // private section of the class  , code in it can't accesed from this class'
    private :
    int arr[100][100] ; // like arr[m][n]
    // 
    int m , n ;
    
    //public section
    public :
    // default constructor
    array2D() 
    {
        cout <<    "Welcome to the world of two dimenstion array !\n" ;        
    }
    // creation of 2d array    
    void create()
    {
//        int row  , col ;
        cout << "Enter number of rows : " ;
        cin >> m ;
        cout << "Enter number of columns :    " ;
        cin >> n;
        
        for (int i = 0 ; i < m; i++)
        {
             for ( int j = 0 ; j < n ; j++)   
             {
                 cout << " Enter element :  " ;
                 cin >> arr[i][j] ;                 
             } // second loop           
        }//first loop                
    }    
    // data displayed to the user
    void display()
    {
        for (int i = 0 ; i < m; i++)
        {
             cout << "[" ;
             for ( int j = 0 ; j < n ; j++)   
             {
              cout <<  arr[i][j] << " " ;                 
             } // second loop           
             cout << "]" ;
             cout <<endl ;
        }//first loop                        
    }                
    
    int search(int val = -1)
    {
         if (val == -1 )   
         {
             int target ;
             int index[1][2] ;
             cout << "Enter element to searh : " ;
             cin >> target ;
             
             for (int i = 0 ; i < m; i++)
        {
             for ( int j = 0 ; j < n ; j++)   
             {
                 if ( arr[i][j] == target )
                 {
                     cout << " Target element found at position " << i<<" " << j << "   \n" ;
                     return  ;
                 }
                 
             } // second loop           
        }//first loop                
             
         }
    }
    
    
} ;


int main(int argc, char *argv[])
{
	// while loop to run program for undefinite time depends on the user
	array2D a ;
	while (true)
	{
	    // variable used in this scope
	    int choice ;
	    // menu
	    cout << "Choose from the following operation \n" ;
	    cout<< "1. create \n 2. display \n 3. search \n 4. insert \n 5. delete \n 6. Exit \n" ;
	    cout << "Enter your choice :    " ;
	    cin >> choice ; 
	    
	    switch(choice)
	    {
	        case 1 : {   a.create() ; break ; }	        	        
	        case 2 : { a.display() ; break ; }
	        case 6 : { cout << "program finished by the user ! " ; exit(0) ;}
	        default : { cout << "Enter valid choice : " ; }	        	        	        	        	        	        
	    }	    	    	    	    	    
	}
	return 0 ;
}