#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    unsigned long long n;
    cin >> n;
    cout << n - ceil(n / 3.0) << endl;
    return 0;
}
