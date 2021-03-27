#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> s;
    for (int i = 0; i < N; i++){
        s.push_back(NULL);
        cin >> s[i];
    }
    int r_min = N + 1;
    for (int i = 0; i < N - 1; i++){
        if (s[i] > 0)
            continue;
        int R = 0;
        if (s[i] > 0)
            continue;
        int r = N + 1;;
            for (int j = i + 1; j < N; j++){
            R++;
            if (s[j] == - s[i]){
                r = R;
                break;}
            if (s[j] < 0)
                continue;}
       if (r < r_min)
           r_min = R;
    }
    if (r_min == N + 1)
    cout << 0;
    else cout << r_min;
    return 0;
}
