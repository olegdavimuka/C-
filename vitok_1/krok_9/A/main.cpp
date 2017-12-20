#include <iostream>

using namespace std;

double min (double a, double b) {
    if (a > b) {
        return b;
    } else {
        return a;
    }
}

double max (double a, double b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    double sum = a + b + c;
    cout << min(min(max(a, b), max(b, c)), sum) << endl;
}
