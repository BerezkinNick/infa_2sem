#include <iostream>
using namespace std;

int do_some_awesome_work(int* a, int* b) {
    int c = *a * *b;
    return c;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << do_some_awesome_work(&a, &b);
    return 0;
}