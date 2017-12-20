#include <iostream>

using namespace std;

long long n;

int main()
{
    long long sum1 = 0, sum2 = 0;
    cin >> n;
    long long a[n];
    for (long i = 0; i < n - 1; i++) {
        cin >> a[i];
        sum1 += a[i];
    }
    sum2 = (n * (n + 1)) / 2;
    cout << sum2 - sum1 << endl;
    return 0;
}
