#include <bits/stdc++.h>
using namespace std;

const int maxN = 1e6;
int arr[maxN + 1];
int indexof[maxN + 1];
int n, k;

void solve() {
    int swaps = 0;
    for (int i = 1; i <= n && swaps < k; i++) {
        int cur_n = n - i + 1;
        if (indexof[cur_n] != i) {
            swap(arr[i], arr[indexof[cur_n]]);
            swap(indexof[arr[i]], indexof[arr[indexof[cur_n]]]);
            swaps++;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        indexof[arr[i]] = i;
    }

    solve();

    for (int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}
