#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;  //8bytes

        void fun()
        {   cout<<"inside base fun\n";  }

        void gun()
        {   cout<<"inside base gun\n";  }
        
        void sun()
        {   cout<<"inside base sun\n";  } 

};

class Derived : public Base
{
    public:
        int x,y;  

        void fun()  //redefination
        {   cout<<"inside derived fun\n";  }

        void sun()  //redefination
        {   cout<<"inside derived sun\n";  }

        void run()  //defination
        {   cout<<"inside derived run\n";  }

};  //16 byte

int main()
{
    Base *bp = NULL;

    bp = new Derived();  //upcating

    bp->fun();  // base fun
    bp->gun();  // base gun
    bp->sun();  //base sun
    // bp->run();  //error

    return 0;
}