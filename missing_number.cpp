#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    //solution
    int n;
    cin >> n;
    int arr[n-1];
    for (int i=0; i < n-1; i++){
        cin >> arr[i];
    }
    int ans = 0;
    for (int i=1; i <= n; i++) {
        ans ^= i;
    }
    for (int i=0; i < n-1; i++) {
        ans ^= arr[i];
    }
    cout << ans << "\n";
    return 0;
}
