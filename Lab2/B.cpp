#include <iostream>
using namespace std;
int main ()
{
    int G, A, B, C, F, D;
    cin>>G;
    A = G%4;
    B = G%100;
    C = G%400;
    F = (A == 0) + (B == 0);
    D = (C == 0);
    if (F == 1 || D == 1)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}