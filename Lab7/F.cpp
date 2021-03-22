#include <iostream>
#include <vector>
using namespace std;

void ord_goblin(int i, vector <int>& queue, int& k)
{
    queue.push_back(i);
    k++;
    return;
}

void priv_goblin(int i, vector <int>& queue, int& k)
{
    if (k % 2 == 0)
    {
        queue.insert(queue.begin() + (k / 2), i);
        k++;
    }
    else
    {
        queue.insert(queue.begin() + ((k / 2) + 1), i);
        k++;
    }
    return;
}

int move(vector <int>& queue, int & k)
{
    int goblin = queue[0];
    queue.erase(queue.begin());
    k--;
    return goblin;
}

int main()
{
    int n;
    cin >> n;
    vector <int> goblins;
    int k = 0;
    vector <int> number;
    for (int i = 0; i < n; i++)
    {
        char x;
        int y;
        cin >> x;
        if (x == '-')
        {
            number.push_back(move(goblins, k));
        }
        else
        {
            cin >> y;
            if (x == '+')
                ord_goblin(y, goblins, k);
            if (x == '*')
                priv_goblin(y, goblins, k);
        }
    }
    for (int i = 0; i < number.size(); i++)
        cout << number[i] << "\n";
    return 0;}