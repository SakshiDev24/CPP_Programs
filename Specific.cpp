#include<iostream>
using namespace std;

int Addition(int A, int B)
{
    int ans;
    ans = A+B;
    return ans;
}

float Addition(float A, float B)
{
    float ans;
    ans = A+B;
    return ans;
}
int main()
{
    cout<<Addition(10,11)<<"\n";

    cout<<Addition(10.3f,11.2f)<<"\n";

    return 0;
}