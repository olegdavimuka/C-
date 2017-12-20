#include <iostream>

using namespace std;

int main()
{
    double n;
    cin >> n;
    int x = 0;
    while (n >= 1.2) {
        n -= 1.2;
        x++;
        n += 0.2;
    }
    cout << x << endl;
}
