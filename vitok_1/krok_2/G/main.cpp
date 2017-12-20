#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int x = 0;
    x += abs(a % 2);
    x += abs(b % 2);
    x += abs(c % 2);
    if ((x == 0) || (x == 3)) {
        cout << "NO"<< endl;
    } else {
        cout << "YES"<< endl;
    }
}
