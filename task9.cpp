#include <iostream>
using namespace std;
main()
{
    int rows;
    cout << "enter desired no of rows:";
    cin >> rows;
    for (int j=1;j<=rows;j++)
     {
        for (int i=1;i<=j;i=i+1)
         {
            cout << "*";
         }
        for(int s=rows;s>=j;s--)
         {
            cout << " "; 
         }
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
   