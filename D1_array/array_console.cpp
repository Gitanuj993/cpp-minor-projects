/*
Welcome AT
aim : Array and ADT
theory :    Abstract data types refers to the instances and operation  on a data structure.
instances means the elements on which operations to be performed.
operations are the list of operations which canbe performed on instances like create, display, delete, insert , search.

let's do the the same with Array data types'
*/
#include <iostream>
#include <stdio.h>
using namespace std ;

class lists
{
    private :    
    // declearation of array for the instances 
    int arr1[100] ;
    char arr2[100] ;
    string arr3[100] ;
    double arr4[100] ;
    
    // size neede by the users
    int len_arr1 ;
    int len_arr2 ;
    int len_arr3 ;
    int len_arr4 ;
            
    // lests check for on what user wants to work on ?
    bool is_int = false ;
    bool is_char = false ;
    bool is_string = false ;
    bool is_double = false ;
    
      public : 
      lists(void)
      {
          cout << " Welcome to the console project of array !\n" ;
      }
      
      int is_status()
      {
          if ( is_int == true)
          { return 1 ; }
          
          else if ( is_char == true)
          { return 2 ; }
          
          else if ( is_string == true )
          { return 3 ; }
          
          else if ( is_double == true)
          { return 4 ; }
          // check if nothing is true 
          else { return 0 ; }          
      }
      
    // to create   
      void create()
      {
          int choice ;
          int size ;
          
          cout << " you optioned for the creation of int type  array !\n" ;
          int is_created = is_status() ;
         // decision list already exist or not // what if user want to insert data of different data type // we will see it in next version as it require diiferent  display funcitons like creation took // observed diiferent display cases should be requered also why not add id
          
          cout << " decide what type of data you want type !\n\n" ;
          // options for the data type // menu
          cout<<" 1. int numberes \n 2. char \n 3. names/strings \n 4. decimal numbers \n 5.  exit \n " ;
          // lets take decisions based on the user input  // if wrong input leads to error then we will impliment strict input practices later in the console project
                  // while loop to ensusre coorect input is passed          
          bool flag_valid = true ;
          while (flag_valid)
         {
              cout <<    " Enter your choice :    " ; cin >> choice ;
          // we are using switch() {} to take decisions
          switch(choice)
          {
              case 1 :    { is_int = true ; flag_valid = false ; break ; }
              case 2 :    { is_char  = true ;flag_valid = false ; break ;}
              case 3 :    { is_string  = true  ; flag_valid = false ; break ; }
              case 4 :    { is_double = true ; flag_valid = false ;break ; }
              case 5 :    { cout << " Stopping the process in mid \n" ; return ; } //  exit(0) ; break ; }
              default :    { cout << " Enter the valid input ! :    " ; }                            
          } // switch-end   
         } // while loop -ends
         // if chosen lists already exists then 
           if ( is_created == choice)
          {
               char choice ;
               cout << " --->  list is already exists ! Do you want to continue ( y/n ) :    " ;
               cin >> choice ;
               //taking decision based on the input
               if ( choice !='y')
               {  return ;}

          }          
          // lets create what user want to 
          // lets take what numbers of elements user want to enter ;
          int status = is_status() ;
          // to create int array
          cout <<  " Enter what numbers of elements you want to create :    " ;
          cin >> size ;
          if ( status == 1)
          {
             len_arr1 = size ;
         for (int  i = 0 ; i < size ; i++)                       
         {
              cout << " Enter elements  " << i+1 << " : " ; cin >> arr1[i] ;
         }
        cout << " ##### Array inserted successfully int type##### !\n\n"       ;
          } // create int array  -end
          
          // -start to create char array  
          else if ( status ==2 )
          {
              len_arr2 = size ;
              for (int  i = 0 ; i < size ; i++)                       
                 {
                      cout << " Enter elements : " ; cin >> arr2[i] ;
                 }    
             cout << " #####Array inserted successfully   char type ! \n\n"     ;
          } // char type -end
          
          // start string type values
          else if ( status == 3 )
          {
              len_arr3 = size ;
              for (int  i = 0 ; i < size ; i++)                       
                {
                      cout << " Enter elements : " ; cin >> arr3[i] ;
                 }    
             cout << " ######Array inserted successfully string type ! \n\n"     ;
          } // end string  type -end
          // start double type
          else if ( status ==4 )
          {
              len_arr4 = size ;
              for (int  i = 0 ; i < size ; i++)                       
                 {
                      cout << " Enter elements : " ; cin >> arr4[i] ;
                 }    
             cout << " #####Array inserted successfully double type ! \n\n"     ;
                       } // end double type -end                                                                                                        //  all four data types covered //                                                                                                                                                                                                      
 }//create-end
 
 void display()
 {
     // more than 1 data is seleceted what to do , 
//     int status = is_status() ; what if more than one arr is printed 
//lets print all of them

     // -start to create char array  
      if ( status == 1 )
          {
            cout << " int list is :    [ " ;
            for (int i = 0 ; i < len_arr1 ; i++)                       
                {
                     cout << arr1[i] << " " ;
                 }    
            cout << "] done !\n" ;
          } // int arr1  type -end                                                
      // -start to create char array  
      if ( status == 2 )
          {
            cout << " char  list is :    [ " ;
            for (int i = 0 ; i < len_arr2 ; i++)                       
                {
                     cout << arr2[i] << " " ;
                 }    
            cout << "] done !\n" ;
          } // char arr2  type -end                                                
          
          // -start to create char array  
      if ( status == 3 )
          {
            cout << " string list is :    [ " ;
            for (int i = 0 ; i < len_arr3 ; i++)                       
                {
                     cout << arr3[i] << " " ;
                 }    
            cout << "] done !\n" ;
          } // string  arr3  type -end                                                
          // -start to create char array  
      if ( status == 4 )
          {
            cout << " double list is :    [ " ;
            for (int i = 0 ; i < len_arr4 ; i++)                       
                {
                     cout << arr4[i] << " " ;
                 }    
            cout << "] done !\n" ;
          } //  double  arr4  type -end                                                
 }// display end
 
}; // lists class end ;


int main(int argc, char *argv[])
{
    //lets create an object of class array
    //array a ;
    int choice ;    
     lists a1 ;
     // Menu for the instances and to perform operstions
     while ( true)
     {
    cout << " choose from the following ! \n"     ;
    cout << " 1. create \n 2. Display \n 3. Search \n 4. Insert \n 5. Delete \n 6. Exit \n "  ;
    // take choice form the console user !
    cout << "---> Enter your choice :  "    ; 
    cin >> choice ;
    
    // lets take the decisons based on his choice !
    switch(choice)
    {
         case 1 : { a1.create() ; break ; }
         case 2 : { a1.display() ; break ; }             
         case 6 : { cout <<    " See you next time ! " ; exit(0) ; }
         default : {cout << " Enter valid choice !" ;   }
    }
    
     } // while loop -end
    
    return 0 ;	
}

/*
name of class was array 
in standard namespace library array is resrved thus compiler shows us error  , t
solution is to change class name

error :    if user inputs string type then it will become nightmare for the user :
*/


