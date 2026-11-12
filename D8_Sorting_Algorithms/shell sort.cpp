#include <iostream>
#include <vector>
#include <limits>

// program to sort the array via shell sort !

void shellSort(std::vector<int> & arr) // declearation and parameter 
{
    int n = arr.size() ; // length of the array
    // ther would be three for loops used in this program
    
    //  gaping in the array // 1st for loop 
    for ( int gap = n/2 ; gap > 0 ; gap /= 2)
    {
        for ( int i = gap ; i < n ; i++) /// 2nd for-loop for visiting next elements
        { int temp = arr[i] ;
        int j ;
          for ( j = i ;  j >= gap  && arr[j-gap] > temp;  j -= gap )
          {
              arr[j] = arr[j-gap] ;
          }
          arr[j] = temp ;
        }
    }
}
void show( const std::vector<int> list)
{
    std::cout << " [ " ;
    for (int x : list)
    std::cout<<x <<" " ;
    std:: cout <<"] here is your list \n" ;
}

void insert(std::vector<int> &list)
{
    int terms ;
    std::cout << " Enter number of terms :    " ;  std::cin >> terms ;
    list.resize(terms) ;
    for ( int i = 0 ; i < terms ; i++)
    { std::cout << " Enter term " << i+1 << " : " ; std::cin >> list[i] ; }
}
    
    
int main()
{
 int choice ;
 std::vector<int> arr  = { 5 ,10 , 20 , 15 , 3 } ;
 while ( true)             
 {
   std :: cout << " Choose !! \n 1.Insert \n 2. Sort \n 3. Show \n 4. Exit \n Enter Your Choice :" ;
   
   while(!(std::cin >> choice ))
   {
      std::cin.clear() ;       
      std:: cin.ignore(std::numeric_limits<std::streamsize>::max() , '\n' ) ;
       std :: cout << " Enter a valid input ! :    " ;
       
   }
   
   switch(choice)
   {
       case 1 :   insert(arr) ; break ;
       case 2 :    shellSort(arr); std::cout << " List is sorted successfully !!!\n" ; break ;
       case 3 :    show(arr) ; break ;
       case 4 : exit(0) ;
       default :   std ::    cout  << " Try again !!! :    " ;
   }
 }
 return 0 ;
}
       
            
            
            
        
        
        
        