#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    long long k = 1;
    for (int i = 1; i <= n; ++i) {
        k += i*2;
    }

    cout << k << endl;
}
