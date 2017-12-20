#include <iostream>
#include<cstring>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string a[n + 1];
    cin.ignore();
    for (int i = 1; i < n + 1; i++) {
        getline(cin, a[i]);
    }
    int r;
    cin >> r;
    int b[r];
    for (int i = 0; i < r; i++) {
        cin >> b[i];
    }

    string s;
    for (int i = 0; i < r; i++) {
        s = "Rule ";
        if ((b[i] > 0) && (b[i] < n + 1)) {
            cout << s << b[i];
            s = ": ";
            s += a[b[i]];
            cout << s << endl;
        } else {
            cout << s << b[i];
            s = ": No such rule";
            cout << s << endl;
        }
    }
}
