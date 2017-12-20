#include <iostream>

using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    a = 1 / a;
    b = 1 / b;
    c = 1 / c;
    cout << fixed;
    cout.precision(2);
    cout << 1 / (a + b + c )<< endl;
    return 0;
}
