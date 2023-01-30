#include <iostream>
using namespace std;
main()
{
    int rows;
    cout << "enter desired no of rows:";
    cin >> rows;
    for (int i=1;i<=rows;i=i+1)
     {
        for(int j=1;j<=i;j=j+1)
         {
            cout << "*";
         }
           cout<< endl;
     }
}