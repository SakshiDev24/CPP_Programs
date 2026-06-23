#include<iostream>
using namespace std;

class Base
{
    public :
        int i,j;
        int Add(int A, int B)
        {
            return A+B;
        }
        virtual int Sub(int A, int B) = 0;
};

class Derived : public Base
{
    public :
        int x, y;
        int Mult(int A, int B)
        {
            return A*B;
        }
        int Sub(int A, int B)
        {
            return A-B;
        }
};

int main()
{
    Derived dobj;

    cout<<"Addition: "<<dobj.Add(10,5)<<"\n";
    cout<<"Substraction: "<<dobj.Sub(10,5)<<"\n";
    cout<<"Multiplication: "<<dobj.Mult(10,5)<<"\n";

    return 0;
}