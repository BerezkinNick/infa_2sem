#include <iostream>
#include <vector>
#include <string>
using namespace std;

int check(string& a, string& b)
{
    int k = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] != b[i])
            k = 1;
    }
    return k;
}

int main(){
    int n;
    cin >> n;

    vector<string> word(n);
    vector<int> length(n);

    for (int i = 0; i < n; i++)
        cin >> word[i];

    for (int i = 0; i < n; i++)
    {
        length[i] = 1;
        for (int j = 0; j < i; j++)
        {
            if ((word[j].size() <= word[i].size()) && (check(word[j], word[i]) == 0) )
                length[i] = max(length[i], length[j] + 1);
        }
    }
    int answer = length[0];

    for (int i = 0; i < n; i++)
        answer = max(length[i], answer);

    cout << answer;
    return 0;
}