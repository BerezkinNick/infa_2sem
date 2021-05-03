#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    int k;
    cin >> n >> k;

    vector<int> a(n);
    vector<int> b(n);

    a[0] = 0;
    b[0] = k - 1;
    for (int i = 1; i < n; i++)
    {
        b[i] = (a[i - 1] + b[i - 1]) * (k - 1);
        a[i] = b[i - 1];
    }

    cout << a[n - 1] + b[n - 1];
    return 0;
}