#include<bits/stdc++.h>
using namespace std;

int main() {
    int size;
    cout << "Enter the Size of Array :";
    cin >> size;

    int arr[size];
    cout << "Enter the array Elements :" << endl;
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    for (int i = 0; i < size; i++) {
        int min = i;
        for (int j = i + 1; j < size; j++)
            if (arr[j] < arr[min])
                min = j;
        if (min != i)
            swap(arr[min], arr[i]);
    }
    cout << "The Sorted array is : " << endl;
    for (const int i: arr)
        cout << i << " ";
}
