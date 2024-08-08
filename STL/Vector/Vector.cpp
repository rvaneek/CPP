//
// Created by Aneek on 03-08-2024.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> V = {1, 2, 3, 4, 5, 6};
    cout << "No. of ELements : " << V.size() << endl;
    for (const auto i: V)
        cout << i << " ";
    cout << endl;
    V.push_back(7);
    V.push_back(8);

    cout << "No. of ELements : " << V.size() << endl;
    for (const auto i: V)
        cout << i << " ";
    cout << endl;


    V.pop_back();

    cout << "No. of ELements : " << V.size() << endl;
    for (const auto i: V)
        cout << i << " ";
    cout << endl;

    V.erase(V.begin() + 5, V.begin() + 8);
}
