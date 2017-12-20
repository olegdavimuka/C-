#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    double s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    double res = pow(sqrt(s1) + sqrt(s2) + sqrt(s3), 2);
    cout << fixed;
    cout.precision(8);
    cout << res;
    return 0;
}
