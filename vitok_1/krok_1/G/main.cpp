#include <iostream>

using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;
    long long x;
    x = n / k + 1;
    if (n % k == 0) x--;

    cout << x << " " << n - k + 1 << endl;
}
