#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }

    int max[1001];
    for (int i = 0; i < 1001; i++) {
        max[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        for (int j = a[i]; j <= b[i]; j++) {
            max[j]++;
        }
    }

    int maxmax = max[0];
    for (int i = 1; i < 1001; i++) {
        if (max[i] > maxmax) maxmax = max[i];
    }

    cout << maxmax;
}
