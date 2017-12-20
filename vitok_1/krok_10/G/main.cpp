#include <iostream>

using namespace std;

long long n;
long long a[n];

int main()
{
    long long sum1 = 0, sum2 = 0;
    cin >> n;
    for (long i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    sum2 = (n * (n + 1)) / 2;
    cout << sum2 - sum1 << endl;
    return 0;
}
