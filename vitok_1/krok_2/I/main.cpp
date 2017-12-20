#include <iostream>

using namespace std;

int main()
{
    long long a, b;
    cin >> a >> b;
    int x = 0;
    if (a % 2 == 0) x = 1;
    int y = 0;
    if (b % 2 == 0) y = 1;
    long long sum = 0;
    for (int i = a + x; i <= b - y; i += 2) {
        sum += i;
    }
    cout << sum << endl;
}
