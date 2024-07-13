#include<bits/stdc++.h>
using namespace std;

double Pow(int num, int pow) {
    if (pow == 0)
        return 1;
    bool sign = pow > 0;
    pow = abs(pow);
    double ans = 1;
    while (pow) {
        if (pow & 1) {
            ans *= num;
        }
        pow >>= 1;
        num *= num;
    }
    if (sign)
        return ans;
    return 1 / ans;
}

double Pow(int *num, int *pow) {
    if (*pow == 0)
        return 1;
    bool sign = *pow > 0;
    *pow = abs(*pow);
    double ans = 1;
    while (*pow) {
        if (*pow & 1) {
            ans *= *num;
        }
        *pow >>= 1;
        *num *= *num;
    }
    if (sign)
        return ans;
    return 1 / ans;
}

int main() {
    int a = 5, b = 2;
    cout << Pow(b, a) << endl;
    cout << Pow(a, -b) << endl;
    // cout << Pow(&a, &b) << endl;
    cout << a << " " << b << endl;
}
