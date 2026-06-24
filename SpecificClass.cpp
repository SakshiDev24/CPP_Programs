#include<iostream>
using namespace std;

class Arithmatic
{
    public:
        int No1; 
        int No2;

        Arithmatic(int A, int B)
        {
            this->No1 = A;
            this->No2 = B;
        }

        int Addition()
        {
            int ans;
            ans = No1 + No2;
            return ans;
        }

         int Substraction()
        {
            int ans;
            ans = No1 - No2;
            return ans;
        }

};

int main()
{
    Arithmatic aobj(11,10);

    cout<<aobj.Addition()<<"\n";

    cout<<aobj.Substraction()<<"\n";

    return 0;
}