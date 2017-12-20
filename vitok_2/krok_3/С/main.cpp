#include <math.h>
#include <iostream>

using namespace std;

//���� �������� ��������� ����, �� �������� ����� �� ���������� ������ ����, ���� �� ������ �������� � ���������,
//���� ������ ������� � ������ ��� ������� �����.

double fact(int n) {
    double res = 0;
    for (int i = 2; i <= n; i++) res += log(i);
    return res;
}

int main()
{
    int n;
    cin >> n;
    double res = fact(n - 2) - 2 * fact(n / 2 - 1) + (n - 2) * log(1 / 2.0);
    res = exp(res);
    cout << fixed;
    cout.precision(4);
    cout << res;
}
