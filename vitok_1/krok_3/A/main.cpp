#include <iostream>

using namespace std;

int main()
{
    double l, k;
    cin >> l >> k;
    int count = 0;
    while (l/k > 1) {
        l /= k;
        count++;
    }
    cout << count << endl;
}
