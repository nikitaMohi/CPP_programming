#include<iostream>

using namespace std;


class PPA
{
  public:
      int No1;
      int No2;

      // Default Constrtuctor

      PPA()
      {
        cout<<"Inside Default Constructor\n";
      }

      // Parametrized Constructor

       PPA(int A, int B)
      {
        cout<<"Inside parameterized Constructor\n";
      }

     ~PPA()
     {
        cout<<"Inside Destructor\n";
     } 

};

int main()
{
    PPA pobj1;
    PPA pobj2(11,21);
    return 0;

}