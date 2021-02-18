#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int * a = new int[n];

    int sum_1 = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum_1 = sum_1 + a[i];
    }

    float aver = sum_1 / n;

    int sum_2 = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] > aver) {
            sum_2 = sum_2 + a[i];
        }
    }

    cout << sum_2;
    delete [] a;
    a = NULL;
    return 0;
}