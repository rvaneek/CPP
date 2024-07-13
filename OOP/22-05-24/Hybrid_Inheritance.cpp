#include<bits/stdc++.h>
using namespace std;

class A {
public:
    A() {
        cout << "Constructor of A Called!!" << endl;
    }

    void print() {
        cout << "Viva la vida" << endl;
    }
};

class B : public A {
public:
    B() {
        cout << "Constructor of B Called!!" << endl;
    }
};

class C : public A {
public:
    C() {
        cout << "Constructor of C Called!!" << endl;
    }
};

class D : public B, public C {
public:
    D() {
        cout << "Constructor of D Called!!" << endl;
    }
};

int main() {
    D d;
    d.B::print();
}
