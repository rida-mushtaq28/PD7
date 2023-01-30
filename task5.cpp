#include <iostream>
using namespace std;
int dots(int triangle);
main()
{
    int triangle;
    cout << "enter no of triangle:";
    cin >> triangle;
    int result=dots(triangle);
    cout << "total no of dots in triangle:"<< result << endl;

    
}
    int dots(int triangle)
    {
      int sum=0;
      for (int x=1;x<=triangle;x=x+1)
     {
       sum=sum+x;
     }
     return sum;

    }