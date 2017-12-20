#include <iostream>
#include <cmath>
#include <stdio.h>
#include <algorithm>

using namespace std;

int n, s;

int main()
{
    scanf("%d", &n);
    long a[n + 1][n + 1];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            a[i][j] = 2 * (n - 1);
        }
    }
    long sum = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            a[i][j] += min(n - i, n - j);
            a[i][j] += min(n - i, j - 1);
            a[i][j] += min(i - 1, n - j);
            a[i][j] += min(i - 1, j - 1);
            sum += a[i][j];
        }
    }
    double ans = sum / pow(n, 2);
    printf("%0.3f", ans);
}
