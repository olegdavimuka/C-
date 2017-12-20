#include <iostream>
#include <stdio.h>
#include <sstream>

using namespace std;

void f(long n) {
    ostringstream ost;
    int count = 0, countX = 0;
    for (int i = 9; i >= 0; i--) {
        if ((n - i) % 9 == 0) {
            count++;
        }
    }
    for (int i = 9; i >= 0; i--) {
        if ((n - i) % 9 == 0) {
            countX++;
            ost.str("");
            ost.clear();
            ost << ((n - i) / 9) * 10 + i;
            cout << ost.str();
            if (countX != count) cout << " ";
        }
    }
}

int main()
{
    long n;
    while (scanf("%d", &n) == 1) {
    if (n == 0) break;
    f(n);
    cout << endl;
    }
    return 0;
}
