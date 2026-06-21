#include<iostream>
using namespace std;

class Demo
{
    public:
    int i;
    float f;

};
int main()
{
    Demo dobj;
    cout<<sizeof(dobj)<<"\n";

    return 0;
}