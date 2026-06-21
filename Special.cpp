#include<iostream>
using namespace std;

class Demo
{
    public:
    int i;    //characteristics
    float f;   //characteristics
    
    Demo()         //behaviour
    {
        cout<<"Inside constructor";
        i = 0;
        f = 0.0f;
    }

    ~Demo()    //destructor
    {
        cout<<"Inside destructor\n";
    }
    void fun();       //behaviour   
};

int main()
{
    cout<<"Inside main\n";

    Demo dobj;        //object creation

    cout<<dobj.i<<"\n";

    dobj.fun();

    cout<<"End of main\n";

    return 0;
}