#include<bits/stdc++.h>
using namespace std;
int n = 5;
int ans = 1;

int main() {
    if (n == 1) {
        cout << ans << endl;
        return ans;
    }
    else
        ans *= n;
    n--;
    main();
}
