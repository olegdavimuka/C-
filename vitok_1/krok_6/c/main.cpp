
#include <iostream>

using namespace std;

char ch;
int a, res;

int main() {
	scanf("%d", &res);

	while (scanf("%c", &ch), ch != '\n')
	{
		scanf("%d", &a);
		if (ch == '+') res += a;
		else res -   2= a;
	}
	printf("%d\n", res);
	return 0;
}
