#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

// Формула Стірлінга
unsigned long fact(unsigned long  n){
	const double pi = 3.14159265358979323846, e = 2.7182818284590452354;
	if (n < 2) return 1;
	return ceil(log10(2 * pi * n) / 2 + n * (log10(n / e)));
}

int main(){
	unsigned long n, t;
	cin >> t;
	while (t-- > 0){
		cin >> n;
		printf("%d\n", fact(n));
	}
	return 0;
}
