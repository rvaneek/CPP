#include<bits/stdc++.h>
using namespace std;

int main() {
    int num1, num2;
    try {
        while (cin >> num1) {
            cin >> num2;
            if (num2 == 0)
                throw "error";
            cout << num1 / num2 << endl;
        }
    } catch (...) {
        cout << "What the Hell are you doing." << endl;
    }
}
