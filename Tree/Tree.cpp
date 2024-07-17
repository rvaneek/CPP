#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node() {
        this->data = 0;
        this->left = nullptr;
        this->right = nullptr;
    }

    explicit Node(const int data) {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }

    Node(const int data, Node *left, Node *right) {
        this->data = data;
        this->left = left;
        this->right = right;
    }

    void insert(const int data) {
        if (this->left && this->data > data)
            this->left->insert(data);
        else if (this->right && this->data <= data)
            this->right->insert(data);
        else if (this->data > data)
            this->left = new Node(data);
        else
            this->right = new Node(data);
    }

    void remove() const {
        if (this->left)
            this->left->remove();
        if (this->right)
            this->right->remove();
        delete this;
    }

    void preOrder() const {
        cout << this->data << " ";
        if (this->left)
            this->left->preOrder();
        if (this->right)
            this->right->preOrder();
    }

    void inOrder() const {
        if (this->left)
            this->left->inOrder();
        cout << this->data << " ";
        if (this->right)
            this->right->inOrder();
    }

    void postOrder() const {
        if (this->left)
            this->left->postOrder();
        if (this->right)
            this->right->postOrder();
        cout << this->data << " ";
    }

    void display() {
        while (true) {
            system("cls");
            char choice;
            cout << "Select the traversal technique : " << endl <<
                    "Press 'a' for infix traversal." << endl <<
                    "Press 'b' for prefix traversal." << endl <<
                    "Press 'c' for postfix traversal." << endl << endl;
            cout << "Enter your choice :";
            cin >> choice;

            switch (choice) {
                case 'a':
                    this->inOrder();
                    break;
                case 'b':
                    this->preOrder();
                    break;
                case 'c':
                    this->postOrder();
                    break;
                default:
                    cout << "Enter a valid option." << endl;
                    _getch();
                    continue;
            }
            cout << endl;
            break;
        }
    }

    Node *findMin() {
        if (this->left)
            return this->left->findMin();
        return this;
    }

    Node *findMax() {
        if (this->right)
            return this->right->findMax();
        return this;
    }

   bool findNode(int data) {
        if (this->data == data)
            return true;
        if (this->right && this->data < data)
            return this->right->findNode(data);
        if (this->left && this->data > data)
            return this->left->findNode(data);
        return false;
    }
};

int main() {
    Node *root = nullptr;
    int choice, data;
    do {
        cout << "Press 1 for Insertion." << endl <<
                "Press 2 for display." << endl <<
                "Press 3 to get Minimum." << endl <<
                "Press 4 to get Maximum." << endl <<
                "Press 5 to search value." << endl <<
                "Press 6 for exit." << endl << endl;

        cout << "Enter your choice : ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter the Data for new Node : ";
                cin >> data;
                if (!root)
                    root = new Node(data);
                else
                    root->insert(data);
                break;
            case 2:
                if (!root)
                    cout << "The Tree is Empty!" << endl;
                else
                    root->display();
                break;
            case 3:
                if (!root)
                    cout << "The Tree is Empty!" << endl;
                else
                    cout << "The least value is " << root->findMin()->data << endl;
                break;
            case 4:
                if (!root)
                    cout << "The Tree is Empty!" << endl;
                else
                    cout << "The Max value is " << root->findMax()->data << endl;
                break;
            case 5:
                if (!root)
                    cout << "The Tree is Empty!" << endl;
                else {
                    int temp;
                    cout << "Enter the value to search : ";
                    cin >> temp;
                    if (root->findNode(temp))
                        cout << "Value found." << endl;
                    else
                        cout << "Value not found!" << endl;
                }
                break;
            case 6:
                // if (root)
                //     root->remove();
                cout << "Program Exited." << endl;
                break;
            default:
                cout << "Invalid Input" << endl;
        }
        _getch();
        system("cls");
    } while (choice != 6);
    if (root)
        root->remove();
}
