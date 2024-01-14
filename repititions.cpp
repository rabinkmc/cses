#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    string sequence;
    cin >> sequence;
    int l = sequence.length();
    int i = 1;
    int ans = 1;
    while ( i < l) {
        int temp = 1;
        while (sequence[i] == sequence[i-1]){
            temp += 1;
            i = i + 1;
        }
        ans = max(temp, ans);
        i = i + 1;
    }
    cout << ans << "\n";

    return 0;
}
