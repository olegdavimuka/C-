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

    int sum = 0;
    int count = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
        count++;
    }

    double serAr = sum / count;
    int chocolateCount = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > serAr) chocolateCount++;
    }

    cout << chocolateCount;
}
