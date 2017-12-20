#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int x = 0;
    for (int i = 0; i < s.length(); i++) {
        x += (int) s[i];
    }

    if (x % 3 == 0) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
