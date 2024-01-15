#include <bits/stdc++.h>

#define ll long long

using namespace std;

void dfs(int i, int n, int sum, bool found, int total, vector<int> &subset){
    if (total > sum) {
        return ;
    } 
    if (i >  n ) {
        return ;
    }
    if (total == sum ) {
        found = true;
        return ;
    }
    if (!found) {
        subset.push_back(i);
        dfs(i, n, sum, found, total+i, subset);
    }
    if (!found) {
        subset.push_back(i+1);
        dfs(i+1, n, sum, found, total+i+1, subset);
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n;
    cin >> n;
    vector<int> subset;
    subset.push_back(1);
    int sum = (n * (n+1)) / 2;
    bool found = false;
    dfs(2, n, sum, found, 1, subset);
    vector<int> s1;
    if (found) {
        s1 = subset;
    }
    for (auto x: subset) {
        cout << x << " ";
    }
    return 0;
}
