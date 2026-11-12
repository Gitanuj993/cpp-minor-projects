// virtual function HackerRank
//40 marks


#include <iostream>
#include <vector>
using namespace std ;

class person
{
    protected:
    char name[100] ; 
     int  age ;
     
    public : 
    virtual void get_data() =0 ;
    virtual void put_data() =0;
    
};

class student : public person
{
    protected : 
    
    int marks[6] ;
//    int cur_id ;
    int sum = 0 ;
 static  int serial_no  ;  
 
    public :
    
    void get_data()
    {
        serial_no++;
        cout << " Enter Name : " ;
       cin >> name ;                
       cout <<" Enter age " ;
      cin >> age ;
   
         for (int i = 0 ; i <6 ; i++)
      { cout << "Enter marks :  ";
      cin >> marks[i] ;
      sum+=marks[i] ;
      }                    
    }
    
    void put_data()
    {
        cout << " name is : " << name ;
        cout << " age is : " << age ;
        cout << " Sum is  : "<<sum ;     
 cout <<"   and cur_id  is :"<<serial_no <<endl ;
    }
        
        
    };    
        
    
 

class professor : public person 
{
    protected :
    
    static  int serial_no  ;  
    int publication ;
 //   int cur_id ;  
     
    public :
     
    void get_data()
    {
       serial_no++;  
       cout << " Enter Name : " ;
       cin >> name ;                
       cout <<" Enter age " ;
      cin >> age ;
       
       cout << " Enter publication_no : ";
       cin >> publication ;
       
    }
    void put_data()
    {
        cout << " name is : " << name ;
        cout << " age is : " << age ;
        cout << " publication_no : "<<publication ;     
        cout <<"   and cur_id  is : "<<serial_no<<endl ;
    }
        
    
};

//student :: int serial_no = 0 ;  
int student ::serial_no = 0 ;
int professor ::serial_no = 0 ;




int main(int argc, char *argv[])
{
	// 1 professor
	// 2 for student 
	// number of objects 
	
	int num ;
	int choice;
	
	cout << " Enter no of objects : " ;
	cin >> num ;
	vector<person *> user ;
//	user.resize(num) ;
	
	for ( int i = 0 ; i <num ; i++)	
	{
	    cout <<"Enter choice : " ;
	    cin >> choice ;
	    person * per ;
	  //  user[i] = per ;
	    if ( choice == 1)
	    { per = new professor() ; 
	      per ->get_data() ;
	      user.push_back(per) ;
	    }
	    else {
	        per = new student() ; 
	        per-> get_data() ;
	        user.push_back(per);
	    }
	    
	    
	}
	


	
	//outpu
	
	for ( int i = 0 ; i <num ; i++)
	{
	   user[i]->put_data(); 
	}
		
   for ( int i = 0 ; i < user.size() ; i++)
	{
	  delete user[i] ;
	}

}


/*
We can not use variable in the child class which was decleared in the base class

AT decleared Object of base class in child class , person p ;
AT is unable to use p.name 
stating that name is not assignable


person class main data add karne ke liye uska constructor ya member function banana hos sakta hai

child class jisne base class ko as a protected class join kiya hai , 
child class base class ke data members ka use nhi kar sakti kya
//	user[0]->put_data();  doesnt work becouse vector is empty 

*/