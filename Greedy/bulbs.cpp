#include <bits/stdc++.h>
using namespace std;

const int maxN = 1e6;
int arr[maxN];
int n;

int solve() {
    int res = 0;
    for (int i = 0; i < n; i++) {
        arr[i] = (res % 2 == 0)? arr[i] : !arr[i];
        if (arr[i] == 0) {
            res++;
        }
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << solve() << "\n";

    return 0;
}
