#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define llong long long
#define pb push_back

llong n,i,k;
vector<llong>page;


llong check(llong x)
{
    int y=0;
    while (x>0)
    {
        y+=x%10;
        x/=10;
    }
    return y;
}

int main() {
    cin >> n;
    page.pb(0);
    i=1;
    while (page[i-1]<n)
    {
        k=page[i-1]+1;
        page.pb(page[i-1]+check(k));
        i++;
    }
    cout<<i-1;
    return 0;
}
