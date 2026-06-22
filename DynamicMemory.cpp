#include<iostream>
using namespace std;

int main()
{
    int size = 0;
    float *marks = NULL;
    int i = 0;  //loop counter


    cout<<"enter number of elements : \n";
    cin>>size;
    

    // dynamic memory allocation
    marks = new float[size];

    cout<<"enter your marks : \n";

    //iteration
    //    1      2     3
    for(i = 0; i < size; i++)
    {
        cin>>marks[i];   //4
    }

    cout<<"entered marks are : \n";
     //    1      2     3
    for(i = 0; i < size; i++)
    {
        cout<<marks[i]<<"\n";   //4
    }

    delete [] marks;

    return 0;
}