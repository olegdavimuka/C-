#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    double x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    double p = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)) + sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1)) + sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
    double s = 1 / 2.0 * abs((x1 - x3) * (y2 - y1) - (x1 - x2) * (y3 - y1));
    cout << fixed;
    cout.precision(4);
    cout << p << " " << s << endl;
    return 0;
}
