#include <bits/stdc++.h>

#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n;
    cin >> n;
    ll arr[n];
    for (int i=0; i < n;i++){
        cin >> arr[i];
    }
    ll curr = arr[0];
    ll ans = 0;
    for (int i=1; i < n; i++) {
        ans += max(curr - arr[i], (ll)0);
        curr = max(arr[i], curr);
    }
    cout << ans << "\n";
    return 0;
}
