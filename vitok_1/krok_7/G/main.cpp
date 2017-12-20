#include <iostream>

using namespace std;

int main()
{
    string s;
    getline(cin,s);
    bool a[10];

    for (int i = 0; i < 10; i++) {
        a[i] = false;
    }

    for (int i = 0; i < s.length(); i++) {
        a[s[i] - 48] = true;
    }

    int count = 0; int x = 11;
    for (int i = 0; i < 10; i++) {
        if (a[i] == 0)  {
            count++;
            x = i;
        }
    }

    if (count == 0) {
        cout << count;
    } else {
    cout << count << endl;
    }


    for (int i = 0; i < 10; i++) {
        if ((a[i] == 0) && (i == x)) {
            cout << i;
        } else if (a[i] == 0 && (i != x)) {
          cout << i << " ";
        }
    }
}
