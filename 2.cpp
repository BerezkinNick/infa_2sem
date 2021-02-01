#include <iostream>
#include <cmath>

int main()
{
    int a;
    int b;
    int c;
    std::cin >> a;
    std::cin >> b;
    c = sqrt(a*a + b*b);
    std::cout  << c << std::endl;
    return 0;
}