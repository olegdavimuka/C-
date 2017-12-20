#include <iostream>

using namespace std;

int main()
{
    int a1, b1, a2, b2, a3, b3, a4, b4, a5, b5;
    cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3 >> a4 >> b4 >> a5 >> b5;

    string s = "SAD";
    if (((a5 >= a1) &&(a5 <= a2)) && ((b5 <= b1) && (b5 >= b2))) s = "HAPPY";
    if (((a5 > a3) &&(a5 < a4)) && ((b5 < b3) && (b5 > b4))) s = "SAD";

    cout << s << endl;
}
