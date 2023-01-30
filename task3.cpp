#include <iostream>
using namespace std;
void inner(int rows);
void outer(int rows);
main()
{
    int rows;
    int number;
    cout << "enter desired no of rows:";
    cin >> rows;
    outer (rows);
    inner(rows);
}
void outer (int rows)   
  { 
    for (int j=1;j<=rows;j++)
     {
        
        for(int s=rows;s>=j;s--)
         {
            cout << " "; 
         }
         for (int i=1;i<=j;i=i+1)
         {
            cout << "*";
         }
         cout<< endl;
         
     }
  }   
void inner (int rows)
  {


     for (int j=1;j<=rows;j++)
     {
        
        for(int s=1;s<=j;s++)
         {
            cout << " "; 
         }
         for (int i=rows;i>=j;i--)
         {
            cout << "*";
         }
         cout<< endl;
         
     }

  }