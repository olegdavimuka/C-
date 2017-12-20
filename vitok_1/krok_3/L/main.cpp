#include <iostream>

using namespace std;

int main()
{
    string n;
    cin >> n;
    int count = 0;
    for (int i = 0; i < n.length(); i++) {
        if (n[i] == '5') count++;
    }
    cout << count;

}
