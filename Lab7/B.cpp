#include <iostream>
using namespace std;

int main(){
    int N;
    cin>>N;
    int a[N];
    for (int i = 0; i < N; i++)
        cin>>a[i];
    for (int i = 0; i < N; i++){
        if   (  ( (a[i] % 4 == 0) & (a[i] / 1000 != 5) & (a[i] / 1000 != 4) )  ||
                ( (a[i] % 7 == 0) & (a[i] / 1000 != 7) & (a[i] / 1000 != 1) )  ||
                ( (a[i] % 9 == 0) & (a[i] / 1000 != 9) & (a[i] / 1000 != 8) )  )
            cout<<a[i]<<'\n';
    }
    return 0;
}
