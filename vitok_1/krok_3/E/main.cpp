#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    int x[10];
    int x_count = 0;
    while (n > 0 ) {
        x[x_count++] = n % 10;
        n /= 10;
    }

    long long mult = 1, sum = 0;
    for (int i = 0; i < x_count; i++ ) {
        mult *= x[i];
        sum += x[i];
    }

    cout << fixed;
    cout.precision(3);
    cout << (double)mult / sum << endl;
}
