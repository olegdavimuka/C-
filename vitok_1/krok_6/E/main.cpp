#include <iostream>

using namespace std;

int main()
{
    char a[26];
    a[0] = 'A';
    a[1] = 'B';
    a[2] = 'C';
    a[3] = 'D';
    a[4] = 'E';
    a[5] = 'F';
    a[6] = 'G';
    a[7] = 'H';
    a[8] = 'I';
    a[9] = 'J';
    a[10] = 'K';
    a[11] = 'L';
    a[12] = 'M';
    a[13] = 'N';
    a[14] = 'O';
    a[15] = 'P';
    a[16] = 'Q';
    a[17] = 'R';
    a[18] = 'S';
    a[19] = 'T';
    a[20] = 'U';
    a[21] = 'V';
    a[22] = 'W';
    a[23] = 'X';
    a[24] = 'Y';
    a[25] = 'Z';
    string s;
    cin >> s;
    int k;
    cin >> k;

    int x;
    int y = 0;
    int z = 0;
    for (int i = 0; i < s.length(); i++) {
        x = 0;
        for (int j = 0; j < 26; j++) {
            if (s[i] == a[j]) {
                x = j;
            }
        }
        z = x - k;
        if (z < 0) {
          y = 26 + z;
        } else {
            y = z;
        }
        s[i] = a[y];
    }
    cout << s;
}
