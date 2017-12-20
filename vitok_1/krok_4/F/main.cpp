#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string n;
    cin >> n;
    int ans = 0;
    int len = n.length();
    int a = 0;
    int b = 0;
    for (int i = len - 1; i >= 0; i-- ) {
        if ((int) n[i] == 49) {
            b = 1;
        } else {
            b = 0;
        }
        ans += b * pow(2,i - n.length() + 1 + a);
        a += 2;
    }
    cout << ans;
}
