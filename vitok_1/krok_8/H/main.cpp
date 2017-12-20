#include <iostream>
#include <stdio.h>

using namespace std;

int n, m;

int main()
{
    scanf("%d %d", &n, &m);

    printf("%d\n", (1 << n) + (1 << m));
    return 0;
}
