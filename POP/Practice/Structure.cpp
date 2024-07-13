#include<bits/stdc++.h>
using namespace std;

struct Car {
    string name;
    string model;
    int price;
};

int main() {
    Car obj;
    cout << "Enter the Name of car : ";
    cin >> obj.name;
    cout << "Enter the Car Model : ";
    cin >> obj.model;
    cout << "Enter the price of Car : ";
    cin >> obj.price;

    cout << "The Entered details are : " << endl;
    cout << "Name : " << obj.name << endl;
    cout << "Model : " << obj.model << endl;
    cout << "Price : " << obj.price << endl;
}
