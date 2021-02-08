#include <iostream>
using namespace std;
void factorization(int A)
{ int D = 2;
    while (A != 1)
    { while (A%D == 0)
        { cout<<D<<endl;
            A /= D;
        }
        D += 1;
    }
}
int main(int argc, char* argv[])
{   int A;
    cin>>A;
    factorization(A);
    return 0;
}