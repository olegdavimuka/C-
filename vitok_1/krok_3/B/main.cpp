#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if ((n / i) == (n % i)) count++;
    }
    cout << count << endl;
}
