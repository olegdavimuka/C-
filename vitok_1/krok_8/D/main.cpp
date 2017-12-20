#include <iostream>
#include <stdio.h>

using namespace std;

int n, k;

int main()
{
  scanf("%d %d",&n,&k);

  n = n & (-1 << k);

  printf("%d\n",n);

  return 0;
}
