#include <iostream>
using namespace std;

int main()
{
    int a;
    std::cin >> a;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a - i; j++)
            if (j < i) 
		{
                std::cout << ' ';}
            else 
            {std::cout << "*";}
        std::cout << '\n';
    }
}