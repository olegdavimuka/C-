#include <iostream>

using namespace std;

int main()
{
    long n, k;
    cin >> n >> k;
    long long fac = 1;
    bool flag = 0;
    long x;
    for ( ; n > 0; n -= k) {
        x = n;
        if ((1e18 / x) < fac) {
            flag = 1;
            break;
        }
        fac *= n;
    }
    if (!flag) {
        cout << fac;
    } else {
        cout << "overflow";
    }
}
