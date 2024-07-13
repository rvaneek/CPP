#include<bits/stdc++.h>
using namespace std;

void mergeArray(int arr[], int start, int mid, int end) {
    int i = start, j = mid + 1;
    int k = 0;
    int temp[end - start + 1];
    while (i <= mid or j <= end)
        if (i > mid) {
            temp[k++] = arr[j++];
        } else if (j > end) {
            temp[k++] = arr[i++];
        } else if (arr[i] < arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
        }

    for (int l = start; l <= end; l++)
        arr[l] = temp[l - start];
}

void mergeSort(int arr[], int start, int end) {
    if (start >= end)
        return;
    const int mid = start + (end - start) / 2;

    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);

    mergeArray(arr, start, mid, end);
}

int main() {
    int size = 0;
    cout << "Enter the size of Array : ";
    cin >> size;

    int arr[size];
    cout << "Enter the array elements : ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "Array before sort : " << endl;
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    mergeSort(arr, 0, size - 1);

    cout << "Array after sort : " << endl;
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
