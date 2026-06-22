#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;  //8bytes

        void fun()
        {   cout<<"inside base fun\n";  }

        virtual void gun()
        {   cout<<"inside base gun\n";  }
        
        virtual void sun()
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

        virtual void run()  //defination
        {   cout<<"inside derived run\n";  }

};  //16 byte

int main()
{
    Base *bp = new Derived();  //upcasting

    bp->fun();  //base fun
    bp->gun();  //base gun
    bp->sun();  //derived sun
    //bp->run();  //error
 
    return 0;
}