#include <iostream>

using namespace std;

long long s, n, k, t, a;
char c;

int main()
{
    cin >> n;
    long long ans[n];
    for (int i = 0; i < n; i++) {
        cin >> k;
        s = k * 6;
        for (int j = 0; j < k; j++) {
            cin >> c;
            while (c != ':') cin >> c;
            t = 0;
            do {
                cin >> a;
                t++;
            } while (a != 0);
            s = s - t + 1;
        }
    ans[i] = s;
    }
    for (int i = 0; i < n; i++) {
        cout << ans[i] << endl;
    }
}
