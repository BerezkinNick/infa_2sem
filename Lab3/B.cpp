#include <iostream>
using namespace std;

int main()
{
    int x, y, bombs;
    cin >> x >> y >> bombs;
    int* a = new int [(x + 2) * (y + 2)];
    int** square = new int *[x + 2];
    for (int i = 0; i < x + 2; ++i){
        square[i] = a + i * (y + 2);}
    for (int i = 1; i < x + 1; ++i){
        for (int j = 1; j < y + 1; ++j){
            square[i][j] = 0;}
    }
    for (int k = 0; k < bombs; ++k){
        int i, j;
        cin >> i >> j;
        for (int t = 0; t < 9; ++t){
            if (square[i - 1 + t / 3][j - 1 + t % 3] != -1){
                ++square[i - 1 + t / 3][j - 1 + t % 3];
            }
        }
        square[i][j] = -1;
    }
    for (int i = 1; i < x + 1; ++i){
        for (int j = 1; j < y + 1; ++j){
            cout << square[i][j]<<' ';
        }
        cout << endl;
    }
    delete [] square;
    delete [] a;
}