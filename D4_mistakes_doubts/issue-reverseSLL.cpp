// issue
#include <iostream>
using namespace std  ;
typedef struct SLL 
{
    int data ;
    SLL * next ;
} *node ;

node get_node(int val)
{ node temp = new SLL ;
temp ->data = val ;
temp ->next  = NULL ;
return temp ;
}

node  createSLL()
{ int terms ;
int term ;
bool isFirst = true ;
node head  , New , temp ;
head = New = temp = NULL ;
cout << " Enter number of terms : " ; cin>>terms ;
for (int i =0 ; i< terms ; i++)
{
    cout << " Enter term :    " ; cin >> term ;
    New = get_node(term) ;
    if ( isFirst)
    {  head = temp = New ; isFirst = false  ; }
    else {
        temp ->next = New ;
        temp = New ;
    }
}
cout << "    List is Created !!\n" ;
return head ;
}
void showSLL( node head )
{
    node temp = head ;
    while ( temp != NULL)
    { cout << temp->data << " " ; temp = temp -> next ; }
}
void reverseSLL( node & head)        
{
    node temp = head ;
    node key , New ;
    key = New = NULL    ;
    bool isFirst = true ;
    cout << " done \n" ;
    while ( temp != NULL)
    {       key  = temp ;
            if (isFirst)
            { New -> data = key->data ;
            New -> next = NULL ;
            isFirst = false ;
            }
            else 
            { 
                key -> next = New ;
                New = key ;
                temp = temp->next ;
            }        
    }        
    showSLL(New) ;
}
int main(int argc, char *argv[])
{
	node head = NULL ;
	int choice ;
	while ( true )
	{ cout << " Choose ! \n 1. create \n 2. Reverse \n 3. Show \n 4. Exit \n Enter your choice :    " ; 
	while(!(cin >> choice ))
	{ cin.clear() ;
	cin.ignore(numeric_limits<streamsize>::max() , '\n' )   ;
	}
	
	switch ( choice )
	{
	 case 1 :  { head = createSLL() ; break ; }
    case 2 :   reverseSLL(head) ;  break ;
    case 3 :    showSLL(head) ; break ;
	}
}
}