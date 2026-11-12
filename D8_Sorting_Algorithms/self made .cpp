#include <iostream>
using namespace std ;

//sorting algorithm made by me !
// influenced by shell sort 
// without pointers or selection sort 

// time complexity = 
// space complexity = 


void show(int arr[5] )
{ 
    cout << "  [ " ;
    for( int i = 0 ; i < 5 ; i++)
    cout << arr[i]<<" " ;
    cout <<"] " ;
}
int main(int argc, char *argv[])
{
	int arr[5] = { 5,10,20,15,2} ;
	int n = 5 ;
	show(arr) ;
	int k = (n/2) + 1 ;
	cout<<" \ninitially k : " << k <<endl;
	int d = k/2;
	cout<<" initially m , d : " << d <<endl;
	int m = d ;
	
	while ( k !=0)
	{
	    for ( int i = 0 ; i <=m ; i++)
	    
	    {
	        if ( arr[i] > arr[i+k])
	        {
	            int temp = arr[i] ;
	            arr[i] = arr[i+k] ;
	            arr[i+k] = temp ;
	            
	        }
	    }
	    
	    k-=d ; m+=d ;
	}
	 show(arr) ;
	
}