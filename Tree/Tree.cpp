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


    //Function to insert new nodes into the tree
    void insert(const int data) {
        //checking whether the new node should go toward the left child
        if (this->left && this->data > data)
            this->left->insert(data);

        //checking whether the new node should go toward the right child
        if (this->right && this->data <= data)
            this->right->insert(data);

            //Inserting new node as the left child to current node
        else if (this->data > data)
            this->left = new Node(data);

            //Inserting new node as the right child to current node
        else
            this->right = new Node(data);
    }

    //Funtion to remove the entire tree from the memory
    void remove() const {
        //Check for left child
        if (this->left)
            this->left->remove();

        //Check for right child
        if (this->right)
            this->right->remove();

        //Deleting the current node
        delete this;
    }

    void preOrder() const {
        //print the root node
        cout << this->data << " ";

        //then print the left node (if any)
        if (this->left)
            this->left->preOrder();

        //then print the right node (if any)
        if (this->right)
            this->right->preOrder();
    }

    void inOrder() const {
        //print the left node (if any)
        if (this->left)
            this->left->inOrder();

        //then print the root node
        cout << this->data << " ";

        //then print the right node (if any)
        if (this->right)
            this->right->inOrder();
    }

    void postOrder() const {
        //print the left node (if any)
        if (this->left)
            this->left->postOrder();

        //then print the right node (if any)
        if (this->right)
            this->right->postOrder();

        //then print the root node
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

    //Finding the least value by going towards the left most node
    Node *findMin() {
        if (this->left)
            return this->left->findMin();
        return this;
    }

    //Finding the max value by going towards the right most node
    Node *findMax() {
        if (this->right)
            return this->right->findMax();
        return this;
    }


    Node *findNode(int data) {
        if (this->data == data)
            return this;
        if (this->right && this->data < data)
            return this->right->findNode(data);
        if (this->left && this->data > data)
            return this->left->findNode(data);
        return nullptr;
    }

    int findDepth(int i = 1) {
        if (this->left)
            i = max(i, this->left->findDepth(i + 1));
        if (this->right)
            i = max(i, this->right->findDepth(i + 1));
        return i;
    }

    bool deleteNode(int data) {
        if (this->data == data)
            return this->deleteNode();
        else if (this->data > data)
            this->left->deleteNode(data);
        else if (this->data < data)
            this->right->deleteNode(data);
        return false;
    }

    bool deleteNode() {
        auto temp = this->left;
        while (temp->right!=nullptr)
            temp=temp->right;
        return true;
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
                "Press 6 to find Depth." << endl <<
                "Press 7 for exit." << endl << endl;

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
                cout << "Insertion Successfull." << endl;
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
                if (!root)
                    cout << "The Tree is Empty!" << endl;
                else
                    cout << "The depth of tree is " << root->findDepth() << endl;
                break;

            case 7:
                cout << "Program Exited." << endl;
                break;
            default:
                cout << "Invalid Input" << endl;
        }
        _getch();
        system("cls");
    } while (choice != 7);
    if (root)
        root->remove();
}
