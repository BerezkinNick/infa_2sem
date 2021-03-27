#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    vector<vector<int>> mass;
    cin >> N;
    for (size_t i = 0; i < N; i++){
        vector<int> x;
        mass.push_back(x);

        for (size_t j = 0; j < N; j++){
            mass[i].push_back(NULL);
            cin >> mass[i][j];
        }
    }

    vector<vector<int>> mass_t = mass;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            mass_t[j][N - i - 1] = mass[i][j];
        }
    }

    for (size_t i = 0; i < N; i++){
        for (size_t j = 0; j < N; j++)
        {
            cout << mass_t[i][j] << ' ';
        }
        cout << endl;
    }
}