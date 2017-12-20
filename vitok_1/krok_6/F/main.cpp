#include <iostream>

using namespace std;

int main()
{
    int n, c;
    cin >> n;
    cin >> c;
    int a[n];
    string t[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        cin >> t[i];
    }

    int sum = 0;
    int sumb = 0;
    double sumu = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
        if (t[i] == "bedroom") sumb += a[i];
        if (t[i] == "balcony") {
            sumu += (double)a[i] / 2;
        } else {
            sumu += a[i];
        }
    }

    double price = sumu * c;
    cout << fixed;
    cout << sum << endl;
    cout << sumb << endl;
    cout << price << endl;
}
