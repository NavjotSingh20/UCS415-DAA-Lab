#include<iostream>
using namespace std;


#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key) {
    int l = 0, r = n - 1;
    while (l <= r) {
        int m = (l + r) / 2;
        if (arr[m] == key) return m;
        if (arr[m] < key) l = m + 1;
        else r = m - 1;
    }
    return -1;
}

int main() {
    int a[] = {2,5,8,12,16,23,38,56,72,91};
    int n = 10;
    int key = 23;
    cout << binarySearch(a, n, key);
}
