//
// Created by Aneek on 01-08-2024.
//

#include "Class.h"
#include<bits/stdc++.h>
using namespace std;

#include <utility>

class Product {
    int pid;
    string name;
    double price;

public:
    explicit Product(const int pid = 0, string name = "", const double price = 0.0) {
        this->pid = pid;
        this->name = std::move(name);
        this->price = price;
    };

    void getDetails(const int pid, string name, const double price) {
        this->pid = pid;
        this->name = std::move(name);
        this->price = price;
    }

    void print() const {
        cout << "PID : " << this->pid << endl;
        cout << "Name : " << this->name << endl;
        cout << "Price : " << this->price << endl;
    }
};

int main() {
    Test<int> obj(10);
    obj.print();
    Product pro;
    Test<Product> obj2(pro);
}
