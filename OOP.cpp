#include<iostream>
using namespace std;

class Arithmetic
{
    public:
        int No1;
        int No2;

        Arithmetic()
        {
            No1=0;
            No2=0;
        }

        Arithmetic(int i,int j)
        {
            No1=i;
            No2=j;
        }

};
int main()
{
    Arithmetic aobj1;
    
    Arithmetic aobj2(10,11);

    cout<<aobj1.No1<<"\n";
    cout<<aobj1.No2<<"\n";

    cout<<aobj2.No1<<"\n";
    cout<<aobj2.No2<<"\n";

    return 0;

}