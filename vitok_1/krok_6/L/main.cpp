#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

char s[4000001];
int i, len, open, flag;

int main() {
	gets(s);
	len = strlen(s);
	for (open = i = 0; i < len; i++)
	{
		s[i] == '(' ? open++ : open--;
		if (open < 0) flag = 1;
	}
	printf(flag || open ? "NO\n" : "YES\n");
	return 0;
}
