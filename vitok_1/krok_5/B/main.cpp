#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << ".";
        }
        cout << "*";
        for (int j = 0; j < n; j++) {
            cout << ".";
        }
        cout << endl;
    }

    for (int i = 0; i < 2 * n + 1; i++) {
        cout << "*";
    }
    cout << endl;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << ".";
        }
        cout << "*";
        for (int j = 0; j < n; j++) {
            cout << ".";
        }
        cout << endl;
    }
    return 0;
}
