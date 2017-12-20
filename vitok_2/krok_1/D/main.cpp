#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    double rEarth, rMoon;
    rEarth = 81 / (pow(x, 2)+ pow(y, 2));
    rMoon = 1 / (pow((384000 - x), 2) + pow(y, 2));

    if (rEarth > rMoon) {
        cout << "Earth" << endl;
    } else if (rEarth < rMoon) {
        cout << "Moon" << endl;
    } else {
        cout << "Equal" << endl;
    }
}
