#include<bits/stdc++.h>
using namespace std;

class Car {
    char Name[50];
    char Model[50];
    int price = 0;

public:
    void GetDetails() {
        cout << "Enter the Name of Car :";
        cin.getline(Name, 50);
        // cin.ignore();

        cout << "Enter the Model of Car :";
        cin.getline(Model, 50);
        // cin.ignore();

        cout << "Enter the Price of car :";
        cin >> price;

        cout << "Data input successfull!!" << endl;
    }

    void ShowDetais() {
        cout << "Name : " << Name << endl;
        cout << "Model : " << Model << endl;
        cout << "Price : " << price << endl;
    }
};

int main() {
    Car obj;
    // obj.GetDetails();
    fstream file;
    file.open("Object.text", ios::in | ios::binary);
    file.read((char *) &obj, sizeof(obj));
    obj.ShowDetais();
    file.close();
    cout << "Data entry Successfull";
}
