#include <iostream>
using namespace std;
float percentage(int number);
main()
{
  int number;
  cout << "enter number:";
  cin >> number;
  percentage(number);


}
 
float percentage(int number)
{
  float p1,p2,p3;
  float sum1=0;
  float sum2=0;
  float sum3=0;
  for (int x=1;x<=number;x=x+1)
   {
    
    int num;
    cout << "enter numbers:";
    cin >> num;
    
     if (num%2==0)
     {
        sum1=sum1+1;
     }
     if (num%3==0)
     {
        sum2=sum2+1;
     }

     if (num%4==0)
     {
        sum3=sum3+1;
     }
    
   }
   p1=(sum1/number)*100;
   p2=(sum2/number)*100;
   p3=(sum3/number)*100;
    cout << p1 <<"%"<< endl;
    cout << p2 << "%"<< endl;
    cout << p3 << "%"<<endl;
}