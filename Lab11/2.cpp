#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> stair(n + 1, 0);
    vector<int> sum(n + 1);
    vector<int> number(n + 1, 0);
    vector<int> t(n + 1, 0);

    for (int i = 1; i < n + 1; i++)
        cin >> stair[i];

    sum[1] = stair[1];
    for (int i = 1; i < n; i ++){
        if (sum[i - 1] >= sum[i]){
            sum[i+1] = sum[i - 1] + stair[i+1];
            number[i+1] = i - 1;
        }
        else{
            sum[i+1] = sum[i] + stair[i+1];
            number[i+1] = i;}
    }

    cout << sum[n] << '\n';
    int k = n;
    while (n > 0) t[n] = n = number[n];
    for (int i = 0; i < k + 1; i++){
        if (t[i] > 0){
            cout << t[i] << ' ';
        }
    }
    cout << k;
}