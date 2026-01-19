#include <iostream>
using namespace std;

int partition(int arr[], int l, int r) {
    int p = arr[r];
    int i = l - 1;
    for (int j = l; j < r; j++) {
        if (arr[j] <= p) {
            i++;
            int t = arr[i]; 
            arr[i] = arr[j]; 
            arr[j] = t;
        }
    }
    int t = arr[i + 1]; 
    arr[i + 1] = arr[r]; 
    arr[r] = t;
    return i + 1;
}

void quickSort(int arr  [], int l, int r) {
    if (l < r) {
        int p = partition(arr, l, r);
        quickSort(arr, l, p - 1);
        quickSort(arr, p + 1, r);
    }
}

int main() {
    int a[] = {4,2,6,9,2};
    int n = 5;
    quickSort(a, 0, n - 1);
    for (int i = 0; i < n; i++) cout << a[i] << " ";
}
