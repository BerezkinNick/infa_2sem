#include <iostream>
using namespace std;
int main ()
{
    int G, A, k;
    k=1;
    A=0;
    S: cin>>G;
    if (G != 0)
    {if (G==A)
            k +=1;
        else
        if (G>A)
            A=G;
            goto S;}
    else
        cout<<k;
    return 0;
}

