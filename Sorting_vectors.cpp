#include <iostream>
#include <vector>
#include <climits>
using namespace std  ;

class Sort
{
    protected :
    vector <long double> list ;
    int terms ;
    bool isEmpty = true ;
    public :
    void cin_list()
    {
        if (   !(isEmpty))
        {
            char ans ;
            cout << " List Already Exist ,  Do you want to overwrite the Previous One  ( y / n ) "  ;            cin >>   ans ;
            if ( ans == 'n' || ans == 'n')
            {
                 cout << " You choosed Not to  overwrite \n"        ; return ;                    
            }
        }
        long double n ;
        cout << "Enter Number of Elements : " ; cin >> terms ;
        if ( terms <=0  &&    terms >20)
        { cout << " Terms not feasible right now \n" ; return ; }
        for ( int i = 0  ; i< terms ; i ++)
        {
             cout << "Enter terms "   << i+1 << " ; " ; cin>> n ;
             list.push_back(n) ;                         
        }
        isEmpty = false ;
        cout << "List Created Successfully!!!" ;
    }
  
    void bubbleSort()
    {
         long double temp ;
         if  ( isEmpty) 
         { cin_list() ; }
         
         for ( int i = 0 ; i < terms -1 ; i ++)
         {
              for ( int j = 0 ; j < terms -i -1 ; j++)   
              {
                    if ( list[j] >  list[j+1] )
                    {
                        temp = list[j] ;
                        list[j] = list[j+1] ;
                        list[j+1] = temp ;
                    }
              }
         }                  
         cout << " ------> List is Sorted Successfullty! \n";
    }
    void reverseList()
    {
          long double temp ;
          for ( int i = 0 ; i < terms -1 ; i ++)
         {
              for ( int j = 0 ; j < terms -i -1 ; j++)   
              {                                        
                        temp = list[j] ;
                        list[j] = list[j+1] ;
                        list[j+1] = temp ;                    
              }
         }
         
                  cout << "---------------> List is reversed !\n"         ;
    }
         
     void insertionSort()
     {
          if ( isEmpty)
          { cin_list() ; }
          int j ; long double key;
          for ( int i = 1 ; i<terms ; i++)   
          {
               key = list[i] ;
               j = i - 1 ;
               while ( j>= 0 && list[j] > key )
               {                        
                        list[j+1] =  list[j] ;
                        list[j] = key ;
                        j-- ;
               }
               j++ ;
               list[j]    = key ;
         }
         cout << " List is sorted using insertion sort!\n"   ;
      }
     
    
    void showList()
    {
      if ( isEmpty) 
      { cout << " \n---------> List is Empty ,First Create a list First !\n";
      cin_list(); }
      else {
          cout <<  " List is ----> [ " ;
             for ( auto& x : list)
             { cout << x << " " ; }
          cout << " ] " ;
             }
    }
     void sortingMenu()
     {
          cout << "\n Choose From the Following.!!!\n"   ;
          cout << "\n Press '0' to Display list. \n  1. Create a list. \n2. BubbleSort \n 3.Insertion Sort. \n 9. Revere the list. \n";
          cout << "Press '11' to Exit " ;
      }   
     
};

int main()
{
    Sort s ;
   // s.cin_list() ;
    while ( true )    
    { int choice ;
    s.sortingMenu();
    cout << "Enter Your Choice : " ; 
    while ( !(cin>>choice ))
    {
        cout << " Try again : "    ;
        cin.clear() ;
        cin.ignore( numeric_limits<streamsize>::max() , '\n') ;
     } 
    
    cout<<endl ;
    switch(choice)
    {
         case 0 : { s.showList() ; break ; }         
         case 1 : { s.cin_list() ; break ; }
         case 2 : { s.bubbleSort() ; break ; }   
         case 3 : { s.insertionSort() ; break ; }
         case 9 : { s.reverseList() ; break ; }
         case 11 : { cout << "Thanks for using our Service , See You Next Time ! \n";
                             exit(0) ; break ;
                         }
         default :  { cout << " Choose Again : " ; }
    }
    
}
    return 0 ;
}