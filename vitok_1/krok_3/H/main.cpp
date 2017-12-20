#include <iostream>

using namespace std;

int main()
{
    string n;
    cin >> n;
    if (n[0] == '-') {
            cout << n[2];
    } else {
        cout << n[1];
    }
}
