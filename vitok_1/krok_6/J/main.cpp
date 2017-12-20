#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    long long sum = 0;
    for (long long i = 0; i < s.length(); i++) {
        sum += s[i] - 48;
    }
    int last = s[s.length() - 1] - 48;
    int x;
    if (((sum % 3) == 0) && ((last % 2) == 0)) {
        x = 6;
        } else if ((((sum + 1) % 3) == 0) && (((last + 1) % 2) == 0)) {
            x = 5;
        } else if ((((sum + 2) % 3) == 0) && (((last + 2) % 2) == 0)) {
            x = 4;
        } else if ((((sum + 3) % 3) == 0) && (((last + 3) % 2) == 0)) {
            x = 3;
        } else if ((((sum + 4) % 3) == 0) && (((last + 4) % 2) == 0)) {
            x = 2;
        } else if ((((sum + 5) % 3) == 0) && (((last + 5) % 2) == 0)) {
            x = 1;
        }
    if (sum == 0) x = 0;

    cout << x << endl;
}
