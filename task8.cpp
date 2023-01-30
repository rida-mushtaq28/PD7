#include <iostream>
using namespace std ;
float calculations(int cargo);
main()
{
    int cargo;
    cout << "enter:";
    cin >>cargo; 
    calculations(cargo);
}

float calculations(int cargo)
{
    int sum1=0;
    int sum2=0;
    int sum3=0;
    int sum=0;
    float p1=0;
    float p2=0;
    float p3=0;
    float average=0;
    for (int x=1;x<=cargo;x++)
     {
        int tons;
        cout << "enter tons:";
        cin>>tons;
        if(tons<=3)
        {
          sum1=sum1+tons;
        }
        if (tons>3 && tons<=11)
        {
            sum2=sum2+tons;
        }
        if (tons>11)
         {
            sum3=sum3+tons;
         }
         sum=sum+tons;
     }

     p1=(sum1*100)/sum;
     cout << "minibus %"<<p1 << endl;
      p2=(sum2*100)/sum;
     cout << "truck %"<<p2 << endl;
      p3=(sum3*100)/sum;
     cout << "train %"<<p3 << endl;
     average=((sum1*200)+(sum2*175)+(sum3*120))/sum;
     cout << "average:"<< average<< endl;

    
    
    
}