#include <iostream>

using namespace std;

long long n;
string s;

int main()
{
    cin >> n;
    cin >> s;
    int x = 0;
    for (int i = 0; i < s.length(); i++) {
        x ^= s[i];
    }
    if (x == 0) {
        cout << "Ok";
    } else {
        cout << (char) x;
    }
}
