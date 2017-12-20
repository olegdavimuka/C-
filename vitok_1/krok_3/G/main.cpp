#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;
    long long x = 2;

    if (n == 0) {
        x = 1;
    } else  {
        for (int i = 2; i <= n; i++) {
            if (x > k) x -= k;
            x = x * 2;
        }
    }

    cout << x << endl;
}
