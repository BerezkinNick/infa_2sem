#include <iostream>
using namespace std;

double find_root(double f(double), double a, double b, double tol=1e-6) {
    double c = (a + b)/2;
    if (f(c) < tol and f(c) > -tol)
    {
        return c;
    }

    if (f(a) < 0)
    {
        if (f(c) > 0)
        {return find_root(f, a, c, tol);}

        if (f(c) < 0)
        {} return find_root(f, c, b, tol);
    }
    if (f(a) > 0)
    {
        if (f(c) < 0)
            return find_root(f, a, c, tol);
        if (f(c) > 0)
            return find_root(f, c, b, tol);
    }
}
double f(double x) {
    return x*x - 8*x + 15;
}

int main()
{
    double a = 2;
    double b = 4;
    double tol;
    double x = find_root(f, a, b, tol=1e-6);
    cout << x << '\n';
    return 0;
}