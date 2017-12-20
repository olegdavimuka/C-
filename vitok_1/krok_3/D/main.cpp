#include <iostream>

using namespace std;

int main()
{
    int e, f, c;
    cin >> e >> f >> c;
    int count = 0;
    int sum = e + f;
    int x = 0;
    while (sum >= c) {
        x = sum / c;
        sum %= c;
        sum += x;
        count += x;
    }
    cout << count << endl;
}
