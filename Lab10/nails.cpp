#include <iostream>
#include <vector>
using namespace std;

void BubbleSort(vector<int>& a) {
    for (size_t i = 0; i + 1 < a.size(); ++i) {
        for (size_t j = 0; j + 1 < a.size() - i; ++j) {
            if (a[j + 1] < a[j]) {
                swap(a[j], a[j + 1]);
            }
        }
    }
}

int main()
{
    int N;
    cin >> N;

    vector<int> nails(N, 0);
    vector<int> a(N-1, 0);

    for (int i=0; i < N; ++i)
        cin >> nails[i];

    BubbleSort(nails);
    a[0] = nails[1] - nails[0];
    a[1] = nails[2] - nails[0];
    for(int i = 2; i < N - 1; ++i){
        if (a[i-1] < a[i-2])
        a[i] = a[i-1] + nails[i+1] - nails[i];
        else a[i] = a[i-2] + nails[i+1] - nails[i];
    }
    cout << a[N-2];
    return 0;
}