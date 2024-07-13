#include <bits/stdc++.h>
using namespace std;

void quickSort(int arr[], int start, int end) {
    if (start >= end)
        return;

    int i = start - 1;
    int j = start;
    int pivot = arr[end];

    while (j < end) {
        if (arr[j] <= pivot) {
            int temp = arr[++i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
        j++;
    }
    arr[end] = arr[++i];
    arr[i] = pivot;

    quickSort(arr, start, i - 1);
    quickSort(arr, i + 1, end);
}

int main() {
    int size = 0;
    cout << "Enter the size of array :";
    cin >> size;

    int arr[size];
    cout << "Enter the elements of array :" << endl;
    for (int i = 0; i < size; i++)
        cin >> arr[i];


    cout << "Before Sort : " << endl;
    for (auto i: arr)
        cout << i << " ";
    cout << endl;

    quickSort(arr, 0, size - 1);

    cout << "After Sort : " << endl;
    for (auto i: arr)
        cout << i << " ";
    cout << endl;
}
