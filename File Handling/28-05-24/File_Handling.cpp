#include<bits/stdc++.h>
using namespace std;

int main() {
    fstream file;
    string Name, Address, Email;
    file.open("Test.text", ios::app);

    cout << "Enter your Name :";
    cin >> Name;
    cin.ignore();

    cout << "Enter your Address :";
    getline(cin, Address);

    cout << "Enter your Email :";
    cin >> Email;
    file << Name << " " << Address << " " << Email << endl;

    file.close();
    cout << "Data written in file.";
}
