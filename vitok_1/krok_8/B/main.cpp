#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    int res = n & (n - 1);
    cout << res;
    return 0;
}
