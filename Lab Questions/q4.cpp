#include <iostream>
using namespace std;

int main() {
    int a[] = {-2, -5, 6, -2, -3, 1, 5, -6};
    int n = 8;

    int cur = a[0], best = a[0];

    for (int i = 1; i < n; i++) {
        if (cur + a[i] > a[i]) cur = cur + a[i];
        else cur = a[i];

        if (cur > best) best = cur;
    }

    cout << best;
}
