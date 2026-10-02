#include<iostream>
using namespace std;

int Addition(int No1,int No2)
{
    int Ans=0;
    Ans=No1+No2;
    return Ans;
    

}
int main()
{
    int value1=0, value2=0, Result=0;

    cout<<"Enter first number:\n";
    cin>>value1;
    
    cout<<"Enter secnod number:\n";
    cin>>value2;

    Result = Addition(value1,value2);

    cout<<"Addition is:"<<Result<<"\n";

    return 0;

}
