#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n <= 3) {
            cout << "Initial" << endl;
    } else if (n > 3 && n <= 6) {
        cout << "Average" << endl;
    } else if (n > 6 && n <= 9) {
        cout << "Sufficient" << endl;
    } else {
        cout << "High" << endl;
    }
}
