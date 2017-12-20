#include <iostream>

using namespace std;



int main()
{
    string s;
    cin >> s;

    int x, y, t;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(') {
            x = i + 1;
            y = i + 1;
            while (s[y + 1] != ')') {
                y++;
            }
            t = 0;
            if ((y - x + 1) % 2 == 0) {
                for (int j = x; j <= (x + y - 1) / 2; j++) {
                    swap(s[j],s[y - t]);
                    t++;
                }
            } else {
                for (int j = x; j <= (x + y) / 2 - 1; j++) {
                    swap(s[j],s[y - t]);
                    t++;
                }
            }
        }
    }

    string s1 = "";
    for (int i = 0; i < s.length(); i++) {
        if ((s[i] != '(') && (s[i] != ')')) {
            s1 += s[i];
        }
    }
    cout << s1 << endl;
}
