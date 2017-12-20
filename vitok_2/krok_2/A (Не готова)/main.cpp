#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    bool mask = false;
    unsigned long long x = 1;
    unsigned long long y = 2;
    string ans = "1";
    if (n % 2 == 0) {

    } else {
        while (x < 1000000000000000) {
        if (x % n == 0) {
            mask = true;
            break;
        }
        x += y;
        y *= 2;
        ans += '1';
    }
    }

    if (mask == false) {
        cout << "no" << endl;
    } else {
        cout << ans;
    }
}
