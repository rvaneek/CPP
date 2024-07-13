#include<bits/stdc++.h>
using namespace std;

void print() {
    for (int i = 0; i < 10; i++)
        cout << i << " ";
}

void disp() {
    for (int i = 0; i < 10; i++)
        cout << "I Love CPP" << endl;
}

int main() {
    thread th2(disp);
    thread th1(print);
    th1.join();
    th2.join();
}
