#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    long i = 0, j = 0;
    long count;
    long max;
    long t;
    while (scanf("%d %d",&i,&j) == 2) {
        max = 1;
        count = 1;
        if (i < j) {
            for (int x = i; x <= j; x++) {
                t = x;
                while (t > 1) {
                    if ((t % 2) == 0) {
                        t /= 2;
                    } else {
                        t = 3 * t + 1;
                    }
                count++;
                }
                if (count > max ) max = count;
                count = 1;
            }
        printf("%d %d %d\n", i, j, max);
        } else {
            for (int x = j; x <= i; x++) {
                t = x;
                while (t > 1) {
                    if ((t % 2) == 0) {
                        t /= 2;
                } else {
                    t = 3 * t + 1;
                }
                count++;
                }
                if (count > max ) max = count;
                count = 1;
            }
        printf("%d %d %d\n", i, j, max);
        }
    }
}

