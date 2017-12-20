#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, h;
    cin >> a >> b >> h;
    cout << fixed;
    cout.precision(3);
    while (a <= b) {
        cout << a << " " << 3 * sin(a) << endl;
        a += h;
    }
    return 0;
}
