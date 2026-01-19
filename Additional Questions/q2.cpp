#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a, a + n);

    int l = 0, ans = 1;

    for (int r = 0; r < n; r++) {
        while (a[r] - a[l] > 10) {
            l++;
        }
        ans = max(ans, r - l + 1);
    }

    cout << ans;
}
