// This program here by illustrate use of linked list using class !
// This is my first program of this type.
#include <iostream>
using namespace std ; // Mistake1
// NewNode ?
class Node
{
//    private : // Mistake 5 : public should be used
public :
    int data ;
    // pointer kaise banaye - fogg in mind
    Node * next = nullptr ;
    
        Node(int val)    // Node me parameter tha ya nahi .
            {
                data = val ;
                next = nullptr ;
                // Mistake 6
                /* Node * temp ;     temp ->data = val ;    temp->next = nullptr ; */
            }
};

class linkedList // : public Node // try to use Node pointer
{      
     private :               
       Node *head = nullptr ;    
       //Node *newNode ; // Mistake 2
    public :  
       //  linkedList() //  currently i didn't know its importance
       
       void insertEnd(int val)  // weather linkedlist is passed or not. // should i need to check in the copy.
           {
                Node * newNode = new Node(val) ;
//                cout<< newNode->data ;// it works
                if (head == nullptr)
               { head = newNode ; } // does it mean, both having same data and next pointer ?
               else
                {  Node * temp = head ; 
                    while (temp->next !=nullptr)
                        { temp = temp->next ; }
                     temp->next = newNode ;
                }
            }                   
            void display()
                {
                    cout << " Linked LIst is [ ";
                    Node * temp = head ;
                      while ( temp  != nullptr)
                        {
                            cout << temp->data;
                           
                            temp= temp->next;
                            cout << " " ;
                        }
                     cout << " ] \n"; // Mistkae 3 : Note used ';' 
                }
};

void Menu()
    {
        cout << " Choose from the following. !\n\n";
        cout << "\t\t1. For inserting values at End. \n";
        cout << " \t\t2. For Displaying values.\n";
        cout << " \t\t3. To insert value at different place. \n ";
        cout << "\t\t4. To search for an Value.\n";
        cout << " \t\t5. To update a ceratain value.\n";
    }
    
void Feature()
    {
        
            }
            
int main()
    {
        linkedList list ; // can  i declear a object in other functions/methods
        while (true)                    // can i use list.insertEnd(n) ; in any function or only in main();
        {
            int choice ;
            Menu();
            cout << "----------------------------------------------------------------\n";
            cout << " Enter your choice :";
            cin >> choice ;
            switch(choice)
                {
                    case 1 : 
                    { 
                    int n ,val ;
                    cout << " Enter Number of Elements you want to create :";
                    cin>>n;
                    for (int i = 0 ; i<n ; i ++)
                        {
                            cout << "   Enter the value "<<i+1<< " :" ;
                            cin >> val ;
                            list.insertEnd(val); 
                         }
                        break ;
                    }
                    case 2 :
                    {
                        list.display();
                    }
                    
                }
                      
        }
        
                            
        return 0 ;
      }                    
        