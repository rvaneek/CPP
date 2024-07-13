#include<bits/stdc++.h>
using namespace std;

int main() {
    int r, c;
    cout << "Enter the Number of Rows :";
    cin >> r;
    cout << "Enter the Number of Cols :";
    cin >> c;

    int arr[r][c];

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> arr[i][j];

    cout << "The current Array is : " << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << arr[i][j] << " ";
            arr[i][j] %= 2;
        }
        cout << endl;
    }
    cout << "The New Array is : " << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
