#include <iostream>
#include <cmath>

using namespace std;

int c (double x) {
    int y = 0;
    if (x >= 1.2) y = (int)(x - 1.2) + 1;
    return y;
}

int main()
{
    int n;
    cin >> n;
    int a, b;
    int count = 0;
    for (int i = 0; i < n; i++) {
        cin >> a;
        cin >> b;
        if (b != c(a)) count++;
    }
    cout << count;
}
