#include <iostream>

using namespace std;

long long f91 (long long n) {
    if (n <= 100) {
        return f91(f91(n + 11));
    } else {
        return n - 10;
    }
}

int main()
{
    long long n;
    cin >> n;
    cout << f91(n) << endl;
}
