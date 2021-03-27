#include <iostream>
using namespace std;

int main(){
    float x, M, D;
    float s =0;
    float c=0;
    int k = -1;
    x = 1;
    while (x != 0){
        k += 1;
        cin>>x;
        s += x;
        c += x*x;}
    M = s/k;
    D = c/k-(s/k)*(s/k);
    cout.precision(3);
    cout<<fixed<<M<<' '<<D;
}
