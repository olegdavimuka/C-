#include <cmath>
#include <iostream>
#include <stdio.h>

using namespace std;

//
int main()
{
    long n;
    while (scanf("%d", &n) == 1) {
        double p = n * log10(n);
        cout << (int) pow(10, p - (int) p) << endl;
    }
}
