#include <cmath>
#include <iostream>

using namespace std;

double heron(double a, double b, double c) {
    return sqrt((a + b + c) * (a + b - c) * (a + c - b) * (b + c - a)) / 4;
}

int main()
{
    double a, b, c, d, f;
    cin >> a >> b >> c >> d >> f;
    double ans = heron(a, b, f) + heron(c, d, f);
    cout << fixed;
    cout.precision(4);
    cout << ans << endl;
    return 0;
}
