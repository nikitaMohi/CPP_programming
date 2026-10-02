#include<iostream>
using namespace std;

class Arithmetic
{
    public:
        int No1;
        int No2;

        Arithmetic()
        {
           this-> No1=0;
           this-> No2=0;
        }

        Arithmetic(int i,int j)
        {
           this-> No1=i;
           this-> No2=j;
        }

       // int Addition(Aritmetic *this)
        int Addition()
        {
            int Ans=0;
            Ans=this->No1+this->No2;
            return Ans;
        }

        // int Subtraction(Subtraction *this)
        int Subtraction()
        {
            int Ans=0;
            Ans=this->No1-this->No2;
            return Ans;
        }


};
int main()
{
    
    Arithmetic aobj1(21,10);
    int Result=0;

    //Result=Addition(&aobj1);
    Result= aobj1.Addition();
    
    cout<<"Addition is :"<<Result<<"\n";

     //Result=Subtraction(&aobj1);
    Result= aobj1.Subtraction();
    
    cout<<"Subtraction is :"<<Result<<"\n";




    return 0;

}