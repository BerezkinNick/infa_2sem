#include <iostream>
using namespace std;
int main () {
    int G, k;
    cin >> G;
    if (G > 10000)
        cout << "error";
    else {
        k = 1;
        while (true) {
            k *= 2;
            if (k == G)
            {cout << "YES";
            break;}
            else {
                if (k > G) {
                    cout << "NO";
                    break;
                }
            }
        }
        return 0;
    }
}