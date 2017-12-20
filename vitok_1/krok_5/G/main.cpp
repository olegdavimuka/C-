#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int x[n];
    string s[n];
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }
    for (int i = 0; i < n; i++) {
        if (x[i] % 2 == 0) {
            s[i] = " is even";
        } else {
            s[i] = " is odd";
        }
    }
    for (int i = 0; i < n; i++) {
        cout << x[i] << s[i] << endl;
    }
}
