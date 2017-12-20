#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    long long n;
    cin >> n;

    bool y = false;
    long long x = 1;
    while (x <= n) {
        if (x == n) y = true;
        x *= 2;
    }
    int count = 0;
    while (n != 0) {
        n /= 2;
        count ++;
    }

    if (y) count--;

    cout << count;
}
