#include <bits/stdc++.h>
using namespace std;

bool canDivide(int a[], int n, int m, int x) {
    int seg = 1;
    int cur = 0;

    for (int i = 0; i < n; i++) {
        if ((cur | a[i]) <= x) {
            cur = cur | a[i];
        } else {
            seg++;
            cur = a[i];
            if (seg > m) return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        int low = a[0], high = 0;
        for (int i = 0; i < n; i++) {
            low = max(low, a[i]);
            high |= a[i];
        }

        int ans = high;

        while (low <= high) {
            int mid = (low + high) / 2;
            if (canDivide(a, n, m, mid)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        cout << ans << endl;
    }
}
