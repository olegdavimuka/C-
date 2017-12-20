#include <iostream>

using namespace std;

long power (long n, long baza) {
    long temp = n;
    for (long i = 1; i < baza; i++) {
        n *= temp;
        if (n > 9973) n %= 9973;
    }
    return n;
}

int main()
{
    int n;
    cin >> n;
    cout << power(n * n * (n * n + 1)/ 2, n);
    return 0;
}
