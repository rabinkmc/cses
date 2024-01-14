#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll dist(ll r1, ll c1, ll r2, ll c2) {
    ll ans = abs(r1 - r2) + abs(c1 - c2);
    return ans;
}

ll f(ll r, ll c) {
    if ((r == 1) && (c == 1)) {
        return 1;
    }
    if (c == 1) {
        if (r % 2 == 0) return r * r;
        return (r - 1) * (r - 1) + 1;
    }
    if (c % 2 == 1) return c * c;
    return (c - 1) * (c - 1) + 1;
}

void testcase() {
    ll r, c;
    cin >> r >> c;
    ll square = max(r, c);
    ll row_max = f(square, 1);
    ll col_max = f(1, square);
    ll ans;
    if (row_max >= col_max) {
        ans = row_max - dist(square, (ll)1, r, c);
    } else {
        ans = row_max + dist(square, (ll)1, r, c);
    }
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        testcase();
    }
    return 0;
}
