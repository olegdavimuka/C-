#include <iostream>
#include <algorithm>

using namespace std;

long long m, n, x, y, s;

int main()
{
    cin >> m >> n >> x >> y;

    s = m - 1 + n - 1;

    s += min(m - x, n - y);
	s += min(m - x, y - 1);
	s += min(x - 1, n - y);
	s += min(x - 1, y - 1);
	cout << s;

}
