#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    double a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    double sum = 0, count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
            sum += a[i];
            count++;
        }
    }

    cout << count << " ";
    cout << fixed;
    cout.precision(2);
    cout << sum;
}
