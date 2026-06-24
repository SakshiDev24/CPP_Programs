#include<iostream>
using namespace std;

class Arithmatic
{
    public:
        float No1; 
        float No2;

        Arithmatic(float A, float B)
        {
            this->No1 = A;
            this->No2 = B;
        }

        float Addition()
        {
            float ans;
            ans = No1 + No2;
            return ans;
        }

         float Substraction()
        {
            float ans;
            ans = No1 - No2;
            return ans;
        }

};

int main()
{
    Arithmatic aobj(11.5f,10.3f);

    cout<<aobj.Addition()<<"\n";

    cout<<aobj.Substraction()<<"\n";

    return 0;
}