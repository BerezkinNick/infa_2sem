#include <iostream>
using namespace std;
int NOD(int A, int B)
{
    while (A != 0 && B != 0)
        if (A > B)
            A %= B;
        else B %= A;
    return A + B;
}
int main ()
{
    int A, B;
    cin>>A;
    cin>>B;
    cout<<NOD(A, B);
    return 0;
}