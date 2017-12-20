#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    cin >> a[0];
    int b = a[0];
    for (int i = 1; i < n; i++) {
        cin >> a[i];
        if (a[i] < b) b = a[i];
    }
    cout << b << endl;
    return 0;
}
