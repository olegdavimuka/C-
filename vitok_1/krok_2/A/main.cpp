#include <iostream>

using namespace std;

int main()
{
    int k, w, a1, b1, a2, b2, a3, b3;
    cin >> k >> w >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;

    if (((b1  >= k) && (a1 <= w)) || ((b2  >= k) && (a2 <= w)) || ((b3  >= k) && (a3 <= w))
        || ((b1 + b2  >= k) && (a1 + a2 <= w)) || ((b1 + b3  >= k) && (a1 + a3 <= w))
        || ((b2 + b3  >= k) && (a2 + a3 <= w)) || ((b1 + b2 + b3  >= k) && (a1 + a2 + a3 <= w))) {
            cout << "YES" << endl;
        } else cout << "NO" << endl;
    return 0;
}
