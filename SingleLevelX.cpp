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

int main()
{
    cout<<"Inside main\n";

    Derived dobj;

    cout<<"Size of Base class object is : "<<sizeof(Base)<<"\n";  //8
    cout<<"Size of derived class object is : "<<sizeof(Derived)<<"\n";  //12
    
    cout<<dobj.i<<"\n"; //0
    cout<<dobj.j<<"\n"; //0
    cout<<dobj.X<<"\n";  //0

    dobj.fun();
    dobj.gun();

    cout<<"End of main\n";

    return 0;

}