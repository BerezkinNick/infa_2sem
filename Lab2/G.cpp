#include <iostream>
using namespace std;
int main ()
{
    int G, A;
    A=2;
    cin>>G;
    if (G==1)
        cout<<"error";
    else {
    while (A<G)
    {if (G%A == 0)
        {cout<<0;
        goto S;}
        else
            A+=1;}
    cout<<1;}
    S: return 0;
}
