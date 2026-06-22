#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;  //8bytes

};

class Derived : public Base
{
    public:
        int x,y;  //16

};

int main()
{
    Base *bp = NULL;

    bp = new Derived();  //upcating

    return 0;
}