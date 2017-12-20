#include <iostream>

using namespace std;

int main()
{
    int n, a, b, c, d;
    cin >> n >> a >> b >> c >> d;
    int m[n + 1];
    for (int i = 1; i < n + 1; i++) {
        m[i] = i;
    }
    int t = 0;
    int x = a;
    int y = b;
    if ((y - x + 1) % 2 == 0) {
        for (int j = x; j <= (x + y - 1) / 2; j++) {
            swap(m[j],m[y - t]);
            t++;
        }
    } else {
        for (int j = x; j <= (x + y) / 2 - 1; j++) {
            swap(m[j],m[y - t]);
            t++;
        }
    }

    x = c;
    y = d;
    t = 0;
    if ((y - x + 1) % 2 == 0) {
        for (int j = x; j <= (x + y - 1) / 2; j++) {
            swap(m[j],m[y - t]);
            t++;
        }
    } else {
        for (int j = x; j <= (x + y) / 2 - 1; j++) {
            swap(m[j],m[y - t]);
            t++;
        }
    }

    for (int i = 1; i < n + 1; i++) {
        cout << m[i] << " ";
    }
}
