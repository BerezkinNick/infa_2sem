#include <iostream>
#include <vector>
using namespace std;

int main(){
    int sum, n;
    cin >> sum;
    cin >> n;

    vector<int> coins(n + 1, 0);
    vector<vector<int>> table(sum + 1, vector<int>(n + 1, 0));

    for (int i = 1; i <= n; ++i)
        cin >> coins[i];

    for (int i = 0; i <= sum; ++i)
        table[i][0] = sum + 1;

    for (int i = 0; i <= n; ++i)
        table[0][i] = 0;

    for (int j = 0; j < n; ++j){
        for (int i = 1; i < sum + 1; i++){
            if ((i - coins[j+1]) >= 0){
                if (table[i - coins[j+1]][j+1] + 1 >= table[i][j])
                    table[i][j+1] = table[i][j];
                   else table[i][j+1] = table[i - coins[j+1]][j+1] + 1;
            }
            else table[i][j+1] = table[i][j];
        }
    }
    cout << table[sum][n];
    return 0;
}