
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string str;
int tmp = 0, ans = 0;

int main()
{
	getline(cin, str);
	if (str[0] == 'k') ans = tmp = 1;
	for (int i = 1; i < str.length(); i++)
	{
		if (str[i] == 'k') tmp++;
		else ans = max(ans, tmp), tmp = 0;
	}
	ans = max(ans, tmp);
	cout << ans << endl;
}
