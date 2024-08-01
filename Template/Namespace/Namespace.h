//
// Created by Aneek on 31-07-2024.
//

#ifndef NAMESPACE_H
#define NAMESPACE_H

namespace Calculator {
    inline int a = 5;
    inline int b = 10;

    inline int add() {
        return a + b;
    }
}

namespace Test {
    inline int a = 10;
    inline int b = 25;

    inline int add() {
        return a + b;
    }
}

class Namespace {
};


#endif //NAMESPACE_H
