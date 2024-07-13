#include<bits/stdc++.h>
using namespace std;

int main() {
    fstream in;
    in.open("Test.text", ios::in);
    string str;
    // getline(in, str);

    while (getline(in, str)) {
        cout << str << endl;
    }
    in.close();
}
