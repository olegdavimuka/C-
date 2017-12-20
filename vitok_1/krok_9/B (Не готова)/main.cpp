#include <iostream>
#include <cmath>

using namespace std;

int f(int n, long p) {
    return (int) round(exp(log(p) / n));
}

int main()
{
    long long n, p;
    cin >> n >> p;
    cout << f(n, p);
}
