#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    long ans = 1;
    for (int i = 0; i < s.length(); i++) {
        if ((s[i] - '0') % 2 == 0) ans *= s[i] - '0';
    }
    if (ans == 1) ans = -1;
    cout << ans;
    return 0;
}
