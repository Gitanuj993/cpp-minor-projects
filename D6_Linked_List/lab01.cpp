#include <iostream>
// Aim : 
using namespace std;

typedef struct Node{
    int data ;
    Node * left ;
    Node *right ;
} n;

int main()
{
 
    n* n1 = new Node{1,nullptr,nullptr};  // we can also declear or provide arguments directly from the declearation , no need provide values explicitely !
    n* n2 = new Node {5,nullptr,nullptr};
    n* root = new Node{0,n1,n2};   
    cout << " Root Node :" << root->data<<endl;
    cout << "Left Node :" << n1->data<<endl;
    cout << "Right Node :" << n2->data<<endl;
    return 0;
}