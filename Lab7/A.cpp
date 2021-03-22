#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, x, k;
    cin>>a>>b>>c>>d>>x;
    if ((x == b - a) & (x == d/c))
        k = 5;
    else if ((x == b - a) || (x == d/c))
        k = 4;
    else if (x == 1024)
        k = 3;
    else k =2;
    cout<<k;
}
