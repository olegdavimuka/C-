#include <cmath>
#include <algorithm>
#include <iostream>

using namespace std;

int max( int a, int b, int c )
{
   int max = ( a < b ) ? b : a;
   return ( ( max < c ) ? c : max );
}

int min( int a, int b, int c )
{
   int min = ( a > b ) ? b : a;
   return ( ( min > c ) ? c : min );
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int maxa = max(a, b, c);
    int mina = min(a, b, c);
    int mid = 0;
    if (maxa == a) {
        if (mina == b) {
            mid = c;
        } else {
            mid = b;
        }
    } else if (maxa == b) {
        if (mina == a) {
            mid = c;
        } else {
            mid == a;
        }
    } else {
        if (mina == a) {
            mid = b;
        } else {
            mid = a;
        }
    }
    if (maxa > mina + mid) {
        cout << "IMPOSSIBLE" << endl;
        return 0;
    } else {
        if (maxa * maxa == mina * mina + mid * mid) {
            cout << "RIGHT" << endl;
            return 0;
        }
        if (maxa * maxa < mina * mina + mid * mid) {
            cout << "ACUTE" << endl;
            return 0;
        }
        if (maxa * maxa > mina * mina + mid * mid) {
            cout << "OBTUSE" << endl;
            return 0;
        }
    }
}
