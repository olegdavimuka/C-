#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int l = s.length();
    bool b[20000];
    for (int i = 0; i < 20000; i++) {
        b[i] = false;
    }

    int t = 9999;
    b[t] = true;
    for (int i = 0; i < l; i++) {
        if (s[i] == 'L') {
            t--;
            b[t] = true;
        } else if (s[i] == 'R') {
            t++;
            b[t] = true;
        }
    }

    int ans = 0;
    for (int i = 0; i < 20000; i++) {
        if (b[i]) ans++;
    }
    cout << ans;
}
