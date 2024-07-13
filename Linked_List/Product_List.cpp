#include<bits/stdc++.h>

#include <utility>
using namespace std;

class Product {
    int id;
    string name;
    int price;

public:
    Product(const int &id, const string &name, const int price) {
        this->id = id;
        this->name = name;
        this->price = price;
    }

    auto show() const {
        cout << "Product ID : " << id << endl;
        cout << "Product Name : " << name << endl;
        cout << "Price : " << price << endl;
    }
};

class Node {
public:
    Product *data;
    Node *next;

    Node() {
        this->data = nullptr;
        this->next = nullptr;
    }

    Node(const int &id, const string &name, const int &price) {
        this->data = new Product(id, name, price);
        this->next = nullptr;
    }

    ~Node() {
        delete this->data;
    }
};

int main() {
    auto Head = new Node(1, "iPhone", 139000);
    Head->data->show();

    delete Head;
}
