#include <iostream>
#include<vector>
using namespace std;

int main()
{   int a, t=0;
    vector <int> s;
    while (cin >> a)
    {
        if(a > t)
            t = a;
        s.push_back(a);
    }

    int p = 1;
    while(p <= t)
    {
        int b=0;
        for(int i=0; i < s.size(); i++)
        {
            if((s[i] / p) % 10 == 0)
            {
                int r=s[i];
                s.erase(s.begin() + i);
                s.insert(s.begin() + b, r);
                b++;
            }

        }
        for(int i=0; i < s.size(); i++)
            cout << s[i] << " ";
        p*=10;
        cout << endl;
    }
    return 0;
}
