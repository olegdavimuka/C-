#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int c[n], t[n], p[n];
    for (int i = 0; i < n; i++) {
        cin >> c[i] >> t[i] >> p[i];
    }
    int x[m];
    for (int i = 0; i < m; i++) {
        cin >> x[i];
    }

    int cost[n];
    for (int i = 0; i < n; i++) {
            cost[i] = c[i];
    }

    for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (t[i] <= x[j]) {
                    cost[i] += ceil(x[j] / t[i]) * (p[i] / 100);
                }
            }
    }

    int min = cost[0];
    int pos = 1;
    for (int i = 1; i < n; i++) {
        if (cost[i] < min) {
            min = cost[i];
            pos = i + 1;
        }
    }
    cout << pos;
    return 0;
}
