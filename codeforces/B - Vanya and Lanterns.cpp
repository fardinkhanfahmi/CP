#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define all(v) v.begin(), v.end()
#define nl "\n"

void solve()
{
    int n, l;
    cin >> n >> l;

    vector<int> a(n);

    for(int i = 0; i < n; i++)
        cin >> a[i];

    sort(all(a));

    int ans = 2 * max(a[0], l - a[n-1]);

    for(int i = 0; i < n-1; i++)
    {
        ans = max(ans, a[i+1] - a[i]);
    }

    cout << fixed << setprecision(10) << ans / 2.0 << nl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
