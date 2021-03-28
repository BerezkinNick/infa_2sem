#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    vector <int> a;
    vector <int> b;
    int x;
    while (cin >> x)
    {
        if(x % 2 == 0)
            a.push_back(x);
        else
            b.push_back(x);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for(int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    for(int i = 0; i < b.size(); i++)
        cout << b[i] << " ";
    return 0;
}
