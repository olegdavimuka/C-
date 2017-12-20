#include <iostream>
#include <stdio.h>

using namespace std;

int n, res;

int main()
{
    scanf("%d",&n);

    res = n - (n & (n  - 1));

    printf("%d\n",res);
}
