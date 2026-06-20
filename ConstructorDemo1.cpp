#include <iostream>
using namespace std;

//Encapsulation
class Marvellous
{
    //access specifier
    public:
    int No1, No2;  //characteristics

    //default constructor
    Marvellous()
    {
        cout<<"Inside default constructor\n";
        No1 = 0;
        No2 = 0;
    }

    //parameterised constructor
    Marvellous(int A, int B)
    {
        cout<<"Inside parameterised constructor\n";
        No1 = A;
        No2 = B;
    }

    //copy constructor
    Marvellous(Marvellous &ref)
    {
        cout<<"Inside copy constructor\n";
        No1 = ref.No1;
        No2 = ref.No2;
    }

    //destructor
    ~Marvellous()
    {
        cout<<"Inside destructor\n";
    }

};

int main()
{
    cout<<"Inside main\n";

    Marvellous mobj1(); //default constructor
    Marvellous mobj2(11,21); //parametrised constructor
    Marvellous mobj3(mobj2); //copy constructor

    cout<<"end of main\n";

    return 0;
    //all destructors gets called
}