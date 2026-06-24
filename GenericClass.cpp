#include<iostream>
using namespace std;

template <class T> 
class Arithmatic
{
    public:
        T No1; 
        T No2;

        Arithmatic(T A, T B)
        {
            this->No1 = A;
            this->No2 = B;
        }

        T Addition()
        {
            T ans;
            ans = No1 + No2;
            return ans;
        }

         T Substraction()
        {
            T ans;
            ans = No1 - No2;
            return ans;
        }

};

int main()
{
    Arithmatic aobj(11,10);  //Error

    cout<<aobj.Addition()<<"\n";

    cout<<aobj.Substraction()<<"\n";

    return 0;
}