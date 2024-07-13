#include<bits/stdc++.h>
using namespace std;

class Animal {
public:
    Animal() {
        cout << "Animal Exists." << endl;
    }

    void eat() {
        cout << "Animal is Eating." << endl;
    }
};

class Dog : public Animal {
public:
    Dog() {
        cout << "Dog Exists." << endl;
    }

    void Bark() {
        cout << "Dog is Barkin." << endl;
    }
};

class BullDog : public Dog {
public:
    BullDog() {
        cout << "BullDog Exists." << endl;
    }

    void Strength() {
        cout << "BullDog is Strong." << endl;
    }
};

int main() {
    BullDog bd;
    bd.eat();
    bd.Bark();
    bd.Strength();
}
