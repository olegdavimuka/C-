#include <math.h>
#include <iostream>

using namespace std;

//якщо рахувати фактор≥али €вно, то фактор≥ал вийде за максимальн≥ розм≥ри типу, тому ми рахуЇмо логарифм з фактор≥алу,
//пот≥м рахуЇмо формулу ≥ шукаЇмо вже потр≥бне число.

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
