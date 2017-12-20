#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a, b;
    a = n / 100;
    b = n % 10;
    if (a != b) {
        cout << max(a,b) << endl;
    } else {
        cout << "=" << endl;
    }
    return 0;
}
