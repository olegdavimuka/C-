#include <iostream>
#include <stdio.h>

using namespace std;

int a, k;

int main()
{
    scanf("%d %d", &a, &k);

    printf("%d\n", a >> k & 1 );
    return 0;
}
