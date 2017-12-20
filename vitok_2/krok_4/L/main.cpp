#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    int s, a;
    cin >> s >> a;
    cout << fixed;
    cout.precision(2);
    cout << (-a + sqrt(a * a + 8 * s)) / 2.0 << endl;
    return 0;
}
