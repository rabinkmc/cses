#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    cout << 0 << "\n";
    for (int i = 2; i <= n; i++) {
        ll k = i * i;
        ll total_positions = (k * (k - 1)) / 2;
        ll attacking_positions = 4 * (i - 2)*(i - 1);
        cout << total_positions - attacking_positions << "\n";
    }

    return 0;
}
