#include <bits/stdc++.h>
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
    cout << endl<<endl;

    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int Temp = i - 1;
        int count = 0 ;
        while (Temp >= 0 and arr[Temp] > key) {
            arr[Temp+1] = arr[Temp];
            Temp--;
            count++;
        }
        arr[Temp+1] = key;
        for (int j = 0; j < size; j++)
            cout << arr[j] << " ";
        cout <<"\t\t count : "<<count<<endl;
    }

    cout << endl << "Array after sorting : " << endl;
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    delete arr;
}
