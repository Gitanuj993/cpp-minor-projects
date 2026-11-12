#include <iostream>
// using namespace std ; is heavy for the program
// program to declear a function outside the class
class Home
{
    private :
    double money ;
    public :
    void getMoney(double) ;   
    Home(double)     ;
    void show();
    void wait_in_Hall();   
    void setMoney(double) ;
};
Home ::    Home (double amount) :    money(amount) 
{    std::cout << "    initiated !!\n" ;
    } 
    void Home ::  wait_in_Hall() 
    { std :: cout << " Wait and have a drink ! \n" ; }
void Home :: show()    
{ std ::    cout <<    " money is  :    " <<    money ; }
void Home :: getMoney(double amount)
{
     if ( amount < 0 || amount > money)
     { std:: cout << " insufficient Money ! \n" ; return ; }
     
     money-= amount  ; std::cout << "  " << amount << "   is released \n " ;
std::cout << "    Remaining money is :    " <<    money << std::endl ;
}
void Home ::    setMoney(double amount)
{ money+= amount ;
std :: cout <<    "    money is collected ! \n Total Balance : "  << money <<  std::endl ;
}
	double cinMoney()
	{  double amount ;
	std ::    cout << " Enter  amount :    " ; std ::    cin >> amount ; 
	return amount ;
	}    
int main(int argc, char *argv[])
{
	Home h(5000) ;
	int choice ;
	double amount ;
	while ( true)
	{ std::cout << " 1 . get Money \n 2. Set Money \n 3. Wait \n 4. showMoney \n 5. Exit \n Enter your choice : ";
	while ( !(std::cin >> choice))
	{
	    std::cin.clear() ;
	    std::cin.ignore(std::numeric_limits<std::streamsize>::max() , '\n') ;
	    std ::    cout << " Try again : " ;
	    
	}

	switch(choice)
	{
	     case 3 : 	h.wait_in_Hall() ; break ;
         case 1 :     {  h.getMoney(cinMoney()) ; break ;}
         case 2 : {      h.setMoney(cinMoney()) ; break ; }
         case 5:    exit(0) ;
         case 4 :    h.show() ; break ;
         default :    std :: cout << " try again :  " ;
	}
	}
	return 0 ;
}