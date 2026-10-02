#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;

        Base()
        {
            cout<<"inside base constructor"<<"\n";
        }

        
        ~Base()
        {
            cout<<"inside base destructor"<<"\n";

        }

        void fun()
        {
            cout<<"innside base fun\n";
        }

        void gun()
        {
            cout<<"inside base gun\n";
        }
         

};

class Derived : public Base
{

    public:
        int x,y;

        Derived()
        {
            cout<<"inside derived consteructor\n";
        }

        ~Derived()
        {
            cout<<"inside derived destructor\n";
        }

        void sun()
        {
            cout<<"insdie derived sun\n";
        }  

};

 class DerivedX : public Derived
 {
    public:
        int a;

        DerivedX()
        {
            cout<<"inside derivedX constructor\n";
        }

        ~DerivedX()
        {
            cout<<"inside derivedX destructro\n";
        }

        void run()
        {
            cout<<"inside derivedX run\n";
        }

 };

int main()
{
    
    DerivedX dobj;

    dobj.fun();
    dobj.gun();
    dobj.sun();
    dobj.run();

    return 0;
}