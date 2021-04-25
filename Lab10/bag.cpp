#include <iostream>
#include <vector>
using namespace std;

int main()
{   int W, N;
    cin >> W;
    cin >> N;

    vector<vector<int>> objects(2, vector<int> (N, 0));
    vector<vector<int>> a(W+1, vector<int>(N+1, 0));

    for (int i = 0; i < 2; ++i){
        for (int j=0; j<N; ++j)
            cin >> objects[i][j];
    }

    for (int i = 0; i < W; ++i){
        for (int j=1; j<=N; ++j){
            if (i+1 >= objects[1][j-1]) {
                if (a[i + 1][j - 1] > a[i - objects[1][j - 1] + 1][j - 1] + objects[0][j - 1])
                    a[i + 1][j] = a[i+1][j - 1];
                else a[i + 1][j] = a[i - objects[1][j - 1] + 1][j - 1] + objects[0][j - 1];
            }
            else a[i + 1][j] = a[i + 1][j-1];
        }
    }
    cout << a[W][N];
    return 0;
}