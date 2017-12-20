#include <iostream>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int ans = n / k * 2;
    if (!n) ans = 0;
    else {
        if (n <= k) ans = 4;
        else {
            ans = 2 * n / k;
            if (2 * n % k) ans++;
            ans *= 2;
        }
    }
    cout << ans << endl;
    return 0;
}
