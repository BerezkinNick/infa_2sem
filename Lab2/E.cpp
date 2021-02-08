#include <iostream>
using namespace std;
int main ()
{
    int G, A;
    A=0;
    S: cin>>G;
    if (G != 0)
    {if (G % 2 == 0 && G>A)
        A = G;
    goto S;}
    else
    cout<<A;
    return 0;
}