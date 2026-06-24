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
    Arithmatic <int> aobj1(11,10);

    cout<<aobj1.Addition()<<"\n";

    cout<<aobj1.Substraction()<<"\n";

    Arithmatic <double> aobj2(11.2345,10.1234);

    cout<<aobj2.Addition()<<"\n";

    cout<<aobj2.Substraction()<<"\n";


    return 0;
}