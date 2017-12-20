#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int main()
{
    int x, y;
    double hour, minute;
    string s;
    while (scanf("%d %d", &x, &y) == 2) {
        s = "";
        if (x == 0 && y == 0) break;
        minute = 6 * y;
        hour = ((x % 12) * 30) + (double)y / 2 ;
        cout << "At ";
        cout << x;
        cout << ":";
        if (y == 0) {
            cout << "00";
        } else {
            cout << y;
        }
        cout << " the angle is ";
        cout << fixed;
        cout.precision(1);
        cout << abs(hour - minute);
        cout << " degrees.";
        cout << endl;
    }
}
