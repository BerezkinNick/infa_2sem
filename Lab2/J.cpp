#include <iostream>
#include <string>
using namespace std;
int main()
{   string bab_number;
    string bab_digit = "";
    int B;
    int N;
    cin >> N;
    while (N != 0) {
        B = N % 60;
        for (int k = 0; k < B % 10; k++) {
            bab_digit += "v";}
        for (int k = 0; k < B / 10; k++) {
            bab_digit += "<";}
        N = N / 60;
        if (N != 0) {
            bab_digit += ".";}
        bab_number += bab_digit;}
    for (int k = 0; k < bab_number.length(); k++) {
        cout << bab_number[bab_number.length() - k - 1];
    }
    return 0;
}
