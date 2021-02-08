#include <iostream>
#include <string>
using namespace std;
int main()
{ int speed;
    cin >> speed;
    string number;
    cin >> number;
    int wage = 0;
    while (number != "A999AA")
    {
        if (speed > 60) {
            if (number[1] == number[2] && number[2] == number[3])
                {wage += 1000;}
            else if (number[1] == number[2] ||
                     number[1] == number[3] ||
                     number[2] == number[3])
            {wage += 500;}
            else {wage += 100;}
        }
        cin >> speed;
        cin >> number;
    }
    cout << wage;
    return 0;}