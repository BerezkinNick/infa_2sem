#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    std::cin >> a;
    b = 1;
    for (int i=0; i < a; i++) {
        for (int j=0; j < b; j++) {
            std::cout << '*';
        }
        std::cout << '\n';
        b++;
    }
    return 0;
}
