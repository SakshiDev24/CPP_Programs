#include <iostream>
using namespace std;

//Encapsulation
class Marvellous
{
    //access specifier
    public:
    int No1, No2;  //characteristics

    void Fun()   //behavior
    {
        cout<<"Inside Fun\n";
    }
    void Gun()   //behavior
    {
        cout<<"Inside Gun\n";  
    }

};

int main()

{
    //object creation
    Marvellous mobj1;
    Marvellous mobj2;

    cout<<sizeof(mobj1)<<"\n";  //8
    cout<<mobj1.No1<<"\n";

    mobj1.Fun();
    mobj2.Fun();
    mobj1.Gun();
    return 0;
}