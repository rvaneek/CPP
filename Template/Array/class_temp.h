//
// Created by Aneek on 30-07-2024.
//

#ifndef CLASS_TEMP_H
#define CLASS_TEMP_H

// #include<bits/stdc++.h>

template<class T>
class Array {
    T *ptr;
    int Size{};

public:
    explicit Array(int Size = 5 , T ptr = nullptr ) {
        this->Size = Size;
        if (ptr)
            this->ptr = ptr;
        else
            this->ptr = new T[Size];
    }

    T operator[](int n) {
        return ptr[n];
    }

    T at(int n) {
        return ptr[n];
    }
};

class class_temp {
};

#endif
