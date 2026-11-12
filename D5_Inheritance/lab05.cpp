#include <iostream>
using namespace std;

class shop
{
  public:
    void create(bool isArrived = true)
    {
        cout << " done\n ";
    }
};

int main(int argc, char *argv[])
{
    // declear normally !
    shop obj1;
    shop *obj2 = &obj1;
    shop *obj3 = new shop; // heap allocation
    (*obj2).create();
    shop obj4 = *new shop; // intresting i think of it .
    obj4.create();         // run
    shop *obj5 = new shop[2];
    obj5[0].create(); // why -> not worked !
    obj5[1].create();
    //	obj5[2].create() ; undefined
    //	obj5[3].create() ; behaviour
    //	obj5[6].create();

    delete[] obj5;
    
}