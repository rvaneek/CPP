//
// Created by Aneek on 01-08-2024.
//

#ifndef CLASS_H
#define CLASS_H
#include <iostream>

template<typename T>
class Test {
    T data;

public:
    Test() = default;

    explicit Test(T data) {
        this->data = data;
    }

    void setData(T data) {
        this->data = data;
    }

    void print() {
        std::cout << "Data : " << data << std::endl;
    }
};

class Class {
};


#endif //CLASS_H
