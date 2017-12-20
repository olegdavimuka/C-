#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans;
    if (n == 10) {
        ans = 3;
    } else if (n <= 3) {
        ans = 1;
    } else {
        ans = 2;
    }
    cout << ans << endl;
    return 0;
}
