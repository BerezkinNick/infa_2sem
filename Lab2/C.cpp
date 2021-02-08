#include <iostream>
using namespace std;
int main ()
{
    int G, k;
    k=0;
    S: cin>>G;
    if (G != 0)
        {k += (G%2 == 0);
    goto S;}
    else
    cout<<k;
    return 0;
}
