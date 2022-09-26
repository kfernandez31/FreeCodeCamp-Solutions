#include <bits/stdc++.h>
using namespace std;

const int maxN = 1e6;
pair<int, int> arr[maxN];
int n;

int solve() {
    
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i].first >> arr[i].second;
    }

    cout << solve() << "\n";

    return 0;
}
