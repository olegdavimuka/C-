#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int f(int b, int n) {
    int x = (int) pow(b, 1.0 / n);
    int y = x + 1;
    if (b - pow(x, n) < pow(y, n) - b) return x;
    return y;
}

int main()
{
    int b, n;
    while (scanf("%d %d", &b, &n) == 2) {
        if (b == 0 && n == 0) break;
        cout << f(b,n) << endl;
    }
    return 0;
}
