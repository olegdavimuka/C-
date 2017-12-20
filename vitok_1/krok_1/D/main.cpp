#include <iostream>

using namespace std;

int main()
{
    long long a, b;
    cin >> a >> b;
    long long k = 0;
    for (int i = a; i <= b; ++i) {
        k += i;
    }
    cout << k << endl;
}
