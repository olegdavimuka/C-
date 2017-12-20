#include <cstdio>
#include <iostream>

using namespace std;
// Сумма цифр ділити на систему числення.
int main()
{
	int b, d, t;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d%d", &d, &b);
		b--;
		char c;
		while (isspace(c = getchar()));
		int ans = c - '0';
		cout << ans << endl;
		while (!isspace(c = getchar())) ans += c - '0';
		cout << ans << endl;
		printf("%d %d\n", d, ans%b);
	}
}
