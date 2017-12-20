#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a;
    int count = 0;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a == 0) count++;
    }
    cout << min(count,n - count) << endl;
    return 0;
}
