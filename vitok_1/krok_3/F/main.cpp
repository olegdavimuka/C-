#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long n, a;
    cin >> n >> a;
    long long sum = 0;
    long long x = a;
    if (a == 1) {
        for (int i = 1; i <= n; i++) {
            sum += i;
        }
    } else {
        for (int i = 1; i <= n; i++) {
            sum += i * x;
            x *= a;
        }
    }

    cout << sum << endl;
}
