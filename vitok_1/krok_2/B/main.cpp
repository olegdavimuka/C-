#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int k[t];
    for (int i = 0; i < t; ++i) {
        cin >> k[i];
    }
    for (int i = 0; i < t; ++i) {
        switch (k[i] % 3) {
        case 1:
            {
            cout << "VGC" << endl;
            break;
            }
        case 2:
            {
            cout << "CVG" << endl;
            break;
            }
        case 0:
            {
            cout << "GCV" << endl;
            break;
            }
        }
    }
}
