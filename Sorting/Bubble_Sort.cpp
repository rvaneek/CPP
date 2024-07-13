#include<bits/stdc++.h>
using namespace std;

int main() {
    int size = 0;
    cout << "Enter the size of Array :";
    cin >> size;

    auto arr = new int[size];
    for (int i = 0; i < size; i++)
        cin >> arr[i];


    cout << endl << "Array before sorting : " << endl;
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl << endl;

    int count = 0, swaps = 0;
    for (int j = size - 1; j > 0; j--) {
        bool sorted = true;
        for (int i = 0; i < j; i++) {
            if (arr[i] > arr[i + 1]) {
                swap(arr[i], arr[i + 1]);
                sorted = false;
                swaps++;
            }
            count++;
        }
        if (sorted)
            break;
    }

    cout << endl << "Array after sorting : (" << count << " iterations) (" << swaps << " swaps)" << endl;
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    delete arr;
}