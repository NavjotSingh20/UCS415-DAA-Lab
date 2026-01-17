#include <iostream>
using namespace std;

void merge(int a[], int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;
    int x[n1], y[n2];

    for (int i = 0; i < n1; i++) x[i] = a[l + i];
    for (int j = 0; j < n2; j++) y[j] = a[m + 1 + j];

    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (x[i] <= y[j]) a[k++] = x[i++];
        else a[k++] = y[j++];
    }
    while (i < n1) a[k++] = x[i++];
    while (j < n2) a[k++] = y[j++];
}

void mergeSort(int a[], int l, int r) {
    if (l < r) {
        int m = (l + r) / 2;
        mergeSort(a, l, m);
        mergeSort(a, m + 1, r);
        merge(a, l, m, r);
    }
}

void printarr(int a[], int n) {
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;
}

int main() {
    int a[] = {12,11,13,5,6,7};
    int b[] = {38,27,43,3,9,82,10};

    int n1 = 6, n2 = 7;

    mergeSort(a, 0, n1 - 1);
    mergeSort(b, 0, n2 - 1);

    printarr(a, n1);
    printarr(b, n2);
}
