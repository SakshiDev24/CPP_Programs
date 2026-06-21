#include<iostream>
using namespace std;


class Base
{
    public:
        int i,j;

        Base()
        {
            cout<<"Inside Base constructor\n";
            i = 0;
            j = 0;
        }
        ~Base()
        {
            cout<<"Inside Base destructor\n";

        }

        void fun()
        {
            cout<<"Inside Base fun\n";

        }

};

class Derived : public Base
{
    public:
        int X;

        Derived()
        {
            cout<<"Inside derived constructor\n";
            X = 0;
        }

        ~Derived()
        {
            cout<<"Inside Derived destructor\n";

        }

        void gun()
        {
            cout<<"Inside gun of derived\n";
        }

};

class DerivedX : public Derived
{
    public:
        int y;

        DerivedX()
        {
            cout<<"Inside DerivedX constructor\n";
            y = 0;
        }

        ~DerivedX()
        {
            cout<<"Inside DerivedX destructor\n";

        }

        void sun()
        {
            cout<<"Inside DerivedX sun\n";
        }

};

int main()
{
    cout<<"Inside main\n";

    DerivedX dobj;

    cout<<"Size of Base class object is : "<<sizeof(Base)<<"\n";  //8
    cout<<"Size of derived class object is : "<<sizeof(Derived)<<"\n";  //12
    cout<<"Size of derivedx class object is : "<<sizeof(DerivedX)<<"\n";  //16
    
    cout<<dobj.i<<"\n"; //0
    cout<<dobj.j<<"\n"; //0
    cout<<dobj.X<<"\n";  //0
    cout<<dobj.y<<"\n";  //0

    dobj.fun();
    dobj.gun();
    dobj.sun();

    cout<<"End of main\n";

    return 0;

}