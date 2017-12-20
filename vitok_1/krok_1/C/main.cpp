#include <iostream>

using namespace std;

int main()
{
    long long n, m;
    cin >> n >> m;

    long long k = 0;
    k = m / n + 1;
    if (m % n == 0) k--;

    cout << k << endl;
}
