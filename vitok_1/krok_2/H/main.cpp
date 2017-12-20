#include <iostream>
#include <cstring>
#include <stdlib.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    string a, b, c, d;
    int len = s.length();
    int t = 0;
    for (int i = 0; i < len; ++i) {
        if (s[i] == '.') break;
        a += s[i];
        t++;
    }
    t++;
    for (int i = t; i < s.length(); ++i) {
        if (s[i] == '.') break;
        b += s[i];
        t++;
    }
    t++;
    for (int i = t; i < s.length(); ++i) {
        if (s[i] == '.') break;
        c += s[i];
        t++;
    }
    t++;
    for (int i = t; i < s.length(); ++i) {
        if (s[i] == '.') break;
        d += s[i];
        t++;
    }
    bool k = false;
    int a1 = -1, b1 = -1, c1 = -1, d1 = -1;
    if (a.length() > 0) a1 = atoi(a.c_str());
    if (b.length() > 0) b1 = atoi(b.c_str());
    if (c.length() > 0) c1 = atoi(c.c_str());
    if (d.length() > 0) d1 = atoi(d.c_str());
    if (((a1 <= 255) && (a1 >= 0)) && ((b1 <= 255) && (b1 >= 0))
        &&((c1 <= 255) && (c1 >= 0)) && ((d1 <= 255) && (d1 >= 0))) k = true;

    cout << k << endl;
}
