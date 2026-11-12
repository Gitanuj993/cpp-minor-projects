#include <iostream>
using namespace std;
// Basic Operations in Arry !
// 1D Array 
class OneD_Array
{
    char cs[30];
        int n;
    public :
    void insert_data()
        {
        
            cout << "Enter number of elements in the array :";
            cin >> n;
            for (int i = 0 ; i<n ; i++)
         {   cout << "  Enter Element :";
            cin >> cs[i];
         }
        }
        
    void show_data()
        {
                   for (int i = 0 ; i <n ;i++) 
                  cout << cs[i] << " ";
        }
};

class TwoD_Array
{
    public :
    int m,n ;
    char cs[20][30];
      
        void insert_data()
            {
                cout << " Enter No. of Rows :";
                cin >> m;
                cout << " Enter No. of Columns :";
                cin >> n;
                for (int i = 0 ; i < m ; i ++)  
                    {
                        for (int j = 0 ;j < n ; j++)
                        {  cout <<"Enter Data :";
                        cin >> cs[i][j];}
                    }
            }
                            
                                 
                        
                
            void show_data()
            {
                for (int i = 0 ; i <m ; i++)
                { for (int j = 0 ; j <n ; j++)
                        { cout << cs[i][j]<< " "; }
                    cout <<endl;
                }
            }
  
};

void Run1( OneD_Array &a)
    {         a.insert_data();
              a.show_data();
    }
    
 void Run2(TwoD_Array & b)
 {
              b.insert_data();
              b.show_data();
 }
              


int main()
    {
              OneD_Array a;
//              Run1(a);
                TwoD_Array b;
                Run2(b);

              return 0;
              
    }
              
                   
    
