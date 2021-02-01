#include <iostream>
using namespace std;

int main()
{
    int N;
    std::cin >> N;
    for (int j=0; j<N; j++) {
        for (int j=0; j<N; j++) {
            std::cout <<'*';
        }
        std::cout<<'\n';
    }
    return 0;
}
