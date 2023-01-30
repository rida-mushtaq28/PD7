#include <iostream>
using namespace std;
main()
{
    int num;
    cout << "enter num :";
    cin >> num;
    int number;
    for (int x=1;x<=num;x=x+1)
     { 
        cout << "enter number :";
        cin >> number;
        if(number%4==0)
         {
           int amplificaton=number*10;
           cout <<amplificaton << " " << endl;
          
         }
         else
         {
         cout << number << " "<< endl;
         } 
     }
     cout << endl;
}