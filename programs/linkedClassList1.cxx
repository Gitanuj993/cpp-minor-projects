// This program here by illustrate use of linked list using class !
// This is my first program of this type.
#include <iostream>
#include <limits>
#include <cctype>
using namespace std; // Mistake1
// NewNode ?
class Node
{
  public:
    int data;

    Node *next = nullptr;

    Node()
    {
        data = 0;
        next = nullptr;
    }
};

class linkedList // : public Node // try to use Node pointer
{
  protected:
    Node *head = nullptr;

  public:
    //  linkedList() //  currently i didn't know its importance

    void insertEnd(int val) // weather linkedlist is passed or not. // should i need to check in the copy.
    {
        Node *newNode = new Node();
        newNode->data = val;

        if (head == nullptr)
        {
            head = newNode;
        } // does it mean, both having same data and next pointer ?
        else
        {
            Node *temp = head;
            while (temp->next != nullptr)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }
    void display()
    {
        int countEle = 0;
        cout << " Linked LIst is  [ ";
        Node *temp = head;
        while (temp != nullptr)
        {
            countEle++;
            cout << temp->data;

            temp = temp->next;
            cout << " ";
        }
        cout << " ]  " << countEle << " Elements \n";
    }
    void reverseList()
    {
        if (head == NULL)
        {
            cout << " Linked-list is Empty!\n";
        }
        else
        {
            Node *temp3 = NULL;
            Node *temp1 = head;
            Node *temp2 = NULL;
            while (temp1 != NULL)
            {
                temp3 = temp2;
                temp2 = temp1;
                temp1 = temp1->next;
                temp2->next = temp3;
            }
            head = temp2;
        }
    }
    /*    Node List()      
    {
        return head;
    }
  */
};

class Features : public linkedList
{
  public:
    void displayRound()
    {
        Node temp;
        temp = head;
        cout << " [ ";
        while (temp->next != head)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << " ] \n";
    }
    // adding a function : make the linkedlist round
    bool round()
    {
        //     Node newHead = List();
        Node temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = head;
        return true;
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
    cout << "\t\t6. To reverse List .\n";
    cout << "\t\t Press backspace key to exit .\n";
    cout << "\t\t Press 7 to make the linked list continuous , round , first node is attached with last node.\n";
    cout << " press 8 to see the rounded linked list.\n";
}

int main()
{
    bool isRound = false;
    linkedList list; // can  i declear a object in other functions/methods
    Features f;
    while (true) // can i use list.insertEnd(n) ; in any function or only in main();
    {
        int choice;
        char ans = 'y';
        if (ans == 'y')
        {
            Menu();
        }
        cout << "----------------------------------------------------------------\n";
        cout << " Enter your choice :";
        //cin >> choice ;

        while (!(cin >> choice))
        {
            cout << " Wrong input try agian :";
            cin.clear();
            cin.ignore(1000, '\n');
        }

        switch (choice)
        {
        case 1:
        {
            int n, val;
            cout << " Enter Number of Elements you want to create :";
            cin >> n;
            for (int i = 0; i < n; i++)
            {
                cout << "   Enter the value " << i + 1 << " :";
                cin >> val;
                list.insertEnd(val);
            }
            cout << " Insertion is completed and  ";
            break;
        }
        case 2:
        {
            if (isRound)
            {
                f.displayRound();
            }
            else
            {
                list.display();
            }
            break;
        }
        case 6:
        {
            list.reverseList();
            cout << " Linked-list is reversed !.\n";
            break;
        }
        case 7:
        {
            isRound = f.round();
            break;
        }
            //    case 8 :
            //  { f.displayRound();
            //}
        }
        //cout << "Do you want to Continue  (y/n) :"      ;
        cout << " Do you want to hide the menu .";
        while (true)
        {
            cin >> ans;
            if (isalpha(ans) && cin.peek() == '\n')
            {
                cin.ignore();
                break;
            }
            else
            {
                cout << "Enter valid keyword ! try again :";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        }
        if (ans != 'y')
        {
            ans = 'n';
            // break ;
        }
    }

    return 0;
}
