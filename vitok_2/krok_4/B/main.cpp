#include <iostream>

using namespace std;

bool straightCorner(int x1, int y1, int x2, int y2, int x3, int y3) {
    if ((x1 - x2) * (x3 - x2) + (y1 - y2) * (y3 - y2) == 0) return true;
    else return false;
}

//Провіряєм кожен кут
int main()
{
    int x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    int count = 0;
    if (straightCorner(x1, y1, x2, y2, x3, y3)) count++;
    if (straightCorner(x2, y2, x3, y3, x4, y4)) count++;
    if (straightCorner(x3, y3, x4, y4, x1, y1)) count++;
    if (straightCorner(x4, y4, x1, y1, x2, y2)) count++;
    cout << count << endl;
    return 0;
}
