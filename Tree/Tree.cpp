#include "Traversal.h"
using namespace std;

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
