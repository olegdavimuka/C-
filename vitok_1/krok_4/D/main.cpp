#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int v = 0, t = 0, ans = 0;
    while (scanf("%d %d",&v,&t) == 2) {
                ans = v * t * 2;
                printf("%d\n", ans);
    }
}
