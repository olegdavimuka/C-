#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s[n];
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> s[i];
        a[i] = s[i].length();
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < a[i]; j++) {
            if (s[i][j] == 'B') {
                if ((j - 1 >= 0) && (s[i][j - 1] == '-')) s[i][j - 1] = '0';
                if ((j - 2 >= 0) && (s[i][j - 2] == '-')) s[i][j - 2] = '0';
            } else if (s[i][j] == 'S') {
                if ((j - 1 >= 0) && (s[i][j - 1] == '-')) s[i][j - 1] = '0';
                if ((j + 1 < a[i]) && (s[i][j + 1] == '-')) s[i][j + 1] = '0';
            }
        }
    }

    int ans;
    for (int i = 0; i < n; i++) {
        ans = 0;
        for (int j = 0; j < a[i]; j++) {
            if (s[i][j] == '-') ans++;
        }
    cout << ans << endl;
    }
}
