#include <iostream>
#include <stdio.h>

using namespace std;

int a, k;

int main()
{
    scanf("%d %d", &a, &k);

    printf("%d\n", a & ~(1 << k));
    return 0;
}
