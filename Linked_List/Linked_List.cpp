#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    explicit Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

auto Display(auto head) {
    while (head != NULL) {
        cout << "[ " << head->data << " ] ";
        head = head->next;
    }
    cout << endl;
}

auto clear(auto n1 = 0) {
    if (n1 == nullptr)
        return;
    clear(n1->next);
    delete n1;
}

int main() {
    const auto n1 = new Node(10);
    n1->next = new Node(20);

    // cout << n1->data << " " << n1->next << endl;
    // cout << n1->next->data << " " << n1->next->next << endl;

    Display(n1);
    clear(n1);
}
