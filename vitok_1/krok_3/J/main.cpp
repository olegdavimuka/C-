#include <iostream>

using namespace std;

int main()
{
    string n;
    char a;
    cin >> n >> a;
    int count = 0;
    for (int i = 0; i < n.length(); i++) {
        if (n[i] == a) count++;
    }
    cout << count ;
}
