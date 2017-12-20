#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int x = a[0], y = a[0];
    for (int i = 0; i < n - 1; i++) {
        y = a[i + 1];
        a[i + 1] = x;
        x = y;
    }
    a[0] = y;

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}
