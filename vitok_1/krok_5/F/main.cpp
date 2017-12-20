#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n][n];
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        sum2 += a[i][n - 1 - i];
        sum1 += a[i][i];
    }
    cout << sum1 << " " << sum2 << endl;
    return 0;
}
