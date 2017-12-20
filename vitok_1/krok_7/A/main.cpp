#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int k;
    cin >> k;
    int b[k];
    for (int i = 0; i < k; i++) {
        cin >> b[i];
    }

    for (int i = 0; i < k; i++) {
        a[b[i] - 1]--;
    }

    for (int i = 0; i < n; i++) {
        a[i] < 0 ? cout <<"yes" << endl : cout << "no" << endl;
    }

}
