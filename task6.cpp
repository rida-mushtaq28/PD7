#include <iostream>
using namespace std;
int count (int period);
main()
{
    int period,patients;
    cout << "enter period:";
    cin >> period;
    count(period);

}

int count (int period)
{
    int doctors=7;
    int treatedpatients=0;
    int untreatedpatients=0;
    


    for (int day=1;day<=period;day++)
     {
        int patients;
        cout <<"enter patients:";
        cin >> patients;
        if(day%3==0 && (untreatedpatients>treatedpatients))
         {
            doctors++;
         }
         if(patients>doctors)
          {
            treatedpatients=treatedpatients+doctors;
            untreatedpatients=(untreatedpatients+patients)-doctors;
          }
          else
          {
            treatedpatients=treatedpatients+patients;
          }
     }
     cout << "treatedpatients:"<< treatedpatients<<endl;
     cout << "untreatedpatients:"<< untreatedpatients<< endl;
}