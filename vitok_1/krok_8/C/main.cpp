#include <iostream>

using namespace std;

long n, k, ans;

int main()
{
    cin >> n;
    while (n > 0) {
        k += n % 2;
        n /= 2;
    }
    ans = 1;
    for (int i = 0; i < k; i++) {
        ans *= 2;
    }
    cout << ans - 1;
    return 0;
}
