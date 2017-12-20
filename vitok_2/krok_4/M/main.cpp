#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    double p = (a + b + c) / 2.0;
    double s = sqrt(p * (p - a) * (p - b) * (p - c));
    cout << fixed;
    cout.precision(2);
    cout << 2 * s / a << " " << 2 * s / b << " " << 2 * s / c << endl;
    return 0;
}
