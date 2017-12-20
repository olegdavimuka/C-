#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    double s, r1;
    cin >> s >> r1;
    double pi = 3.1415926535;
    double r2 = sqrt(r1 * r1 - s/pi);
    cout << fixed;
    cout.precision(2);
    cout << r2 << endl;
    return 0;
}
