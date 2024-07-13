#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

class Employee {
    int id;
    string name;
    int salary;

public:
    Employee(const int &id, const string &name, const int &salary) {
        this->id = id;
        this->name = name;
        this->salary = salary;
    }

    void display() const {
        cout << "Employee id : " << id << endl;
        cout << "Employee name : " << name << endl;
        cout << "Employee salary : " << salary << endl;
    }

    void displayNode() const {
        cout << "[ " << id << ", " << name << ", " << salary << " ] ";
    }

    void update() {
        int choice;
        cout << "What do you want to update :" << endl
                << "1. Name" << endl
                << "2. Salary" << endl
                << "3. Both" << endl;
        cout << endl << endl << "Enter your option :";
        cin >> choice;
        if (choice == 1) {
            cout << "Enter the name :";
            cin >> this->name;
        } else if (choice == 2) {
            cout << "Enter the salary :";
            cin >> this->salary;
        } else if (choice == 3) {
            cout << "Enter the name :";
            cin >> this->name;
            cout << "Enter the salary :";
            cin >> this->salary;
        } else
            cout << "Invalid Input." << endl;
    }

    void update(const int &id, const string &name, const int &salary) {
        this->id = id;
        this->name = name;
        this->salary = salary;
    }

    bool validate(int &id) const {
        if (this->id == id)
            return true;
        else
            return false;
    }
};

class Node {
public:
    Employee *obj;
    Node *next;

    Node() {
        this->obj = nullptr;
        this->next = nullptr;
    }

    Node(const int &id, const string &name, const int &salary) {
        this->obj = new Employee(id, name, salary);
        this->next = nullptr;
    }

    void create() {
        int id, salary;
        string name;
        cout << "Enter the Employee ID :";
        cin >> id;



        cin.ignore();
        cout << "Enter the name of the Employee :";
        getline(cin, name);
        cout << "What is the salary of " << name << " :";
        cin >> salary;
        this->obj = new Employee(id, name, salary);
    }

    bool checkCreate(int id) {
        if(this->obj->validate(id))
            return true;
        else if(this->next!=NULL)
            this->next->checkCreate(id);

    }

    void update(int &id) {
        if (obj->validate(id)) {
            obj->update();
        } else if (this->next != nullptr)
            next->update(id);
    }

    void update(const int &id, const string &name, const int &salary) const {
        obj->update(id, name, salary);
    }

    void display() const {
        obj->displayNode();

        if (this->next != nullptr)
            next->display();
    }

    void find(int &id) const {
        if (obj->validate(id))
            obj->display();
        else if (this->next != nullptr)
            next->find(id);
        else
            cout << "ID not found!" << endl;
    }

    auto remove(int &id) {
        if (obj->validate(id)) {
            auto temp = this->next;
            delete this;
            return temp;
        }
        if (this->next != nullptr)
            this->next = next->remove(id);
        return this;
    }

    ~Node() {
        delete obj;
    }
};

auto clear(auto head) {
    if (head == NULL)
        return;
    clear(head->next);
    delete head;
}

int main() {
    Node *head = NULL;
    bool exit = false;
    do {
        int choice;
        cout << "Choose an option :" << endl;
        cout << "1. Create new Employee." << endl
                << "2. Display all Employee." << endl
                << "3. Display by ID." << endl
                << "4. Delete All Employee's." << endl
                << "5. Delete Employee by ID." << endl
                << "6. Update Employee by ID." << endl
                << "7. Exit." << endl;

        cout << endl << endl << "Enter your choice:";
        cin >> choice;

        auto temp = head;

        switch (choice) {
            case 1:
                if (head == NULL) {
                    head = new Node();
                    temp = head;
                } else {
                    while (temp->next != NULL)
                        temp = temp->next;
                    temp->next = new Node();
                    temp = temp->next;
                }
                temp->create();
                cout << endl << endl;
                break;

            case 2:
                if (head != nullptr)
                    head->display();
                else
                    cout << "NO node create!";
                cout << endl << endl;
                break;

            case 3:
                cout << "Enter an id to search:";
                cin >> choice;
                if (head != nullptr)
                    head->find(choice);
                else
                    cout << "NO node created!";
                cout << endl << endl;
                choice = 3;
                break;
            case 4:
                clear(head);
                head = nullptr;

                cout << "Deletion successfull" << endl << endl;
                break;
            case 5:
                cout << "Enter an id to delete:";
                cin >> choice;
                if (head != nullptr)
                    head->remove(choice);
                else
                    cout << "No node created!";
                cout << endl;
                choice = 5;
                cout << endl << endl;
                break;
            case 6:
                cout << "Enter an id to update:";
                cin >> choice;
                if (head != nullptr)
                    head->update(choice);
                else
                    cout << "No node created!";
                cout << endl;
                choice = 6;
                cout << endl << endl;
                break;
            case 7:
                exit = true;
                break;
            default:
                cout << endl << endl;
                cout << "Invalid Input!!" << endl;
        }

        _getch();


        system("cls");
    } while (!exit);


    clear(head);
}
