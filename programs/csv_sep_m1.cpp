//isolated testing 
// it worked for string str = "12,23,4,"
// travesing a string as char : done
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std ;
// method 1 : using stoi string to int 
int main(int argc, char *argv[])
{
	string str = "12,3" ;
	vector<int> list ;
	string temp = "" ;
	
	string trash ;
	int num ;
	for( char x : str)
{
	 
	 if ( x == ',')
	 {  
	 cout << "num--> " <<num<< endl ;
	 list.push_back(num) ;
	 temp = "" ; 
	 }
	 else 
	 {
	     temp = temp+x ;
	     cout << "--> " <<temp << endl ;
	     num = stoi(temp) ;
	 }		 
}
if( temp.empty()==0)
list.push_back(num);


for(int x : list)
{
cout << x <<" " ;
}
}
// to check whether str = str + "1" : done
	
//	string to int conversion
	
	
