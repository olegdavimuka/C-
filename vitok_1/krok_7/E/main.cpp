#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    double b[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (b[i] < 50) count += a[i];
    }

    cout << count;
}
