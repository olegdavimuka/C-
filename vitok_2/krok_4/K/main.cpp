#include <iostream>

using namespace std;

int main()
{
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    if ((a == b) && (c == d)) {
        cout << "YES" << endl;
        return 0;
    }
    if ((a == c) && (b == d)) {
        cout << "YES" << endl;
        return 0;
    }
    if ((a == d) && (b == c)) {
        cout << "YES" << endl;
        return 0;
    }
    cout << "NO" << endl;
    return 0;
}
