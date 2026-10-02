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

        int Addition()
        {
            int Ans=0;
            Ans=No1+No2;
            return Ans;
        }

};
int main()
{
    
    Arithmetic aobj1(10,11);
    int Result=0;

    Result= aobj1.Addition();

    cout<<"Addition is :"<<Result<<"\n";



    return 0;

}