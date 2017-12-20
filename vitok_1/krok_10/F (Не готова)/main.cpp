#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define llong long long
#define pb push_back


llong n,ans;


int main() {
    cin>>n;
    ans+=(n/3)*2;
    n%=3;
    if (n==2) ans++;
    cout<<ans;
    return 0;
}
