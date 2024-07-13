#include<bits/stdc++.h>
using namespace std;

int main() {
    int *ptr; //Wild Pointer
    cout << "The size of a pointer is : " << sizeof(ptr) << endl;
    int i = 69;
    ptr = &i; // Normal Pointer
    ptr = NULL; // Null pointer
    delete ptr; // Dangling Pointer
    void *vptr = &i; // void Pointer (Compatible with any type)
    // *vptr; (Erroneous) can't access value with null pointer
}
