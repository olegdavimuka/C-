#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int n[t];
    int a[t][100], b[t][100];
    for (int i = 0; i < t; i++) {
        cin >> n[i];
        for (int j = 0; j < n[i]; j++) {
            cin >> a[i][j] >> b[i][j];
        }
    }

    string ans;
    for (int i = 0; i < t; i++) {
        ans = "YES";
        for (int j = 0; j < n[i] - 1; j++) {
            for (int o = j + 1; o < n[i]; o++) {
                if ((a[i][o] > b[i][j]) || (b[i][o] < a[i][j])) {
                    ans = "NO";
                    break;
            }
        }
        cout << ans << endl;
    }
}
