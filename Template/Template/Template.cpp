//
// Created by Aneek on 31-07-2024.
//

#include "Template.h"

#include <iostream>

int main() {
    std::cout << typeid(get(10.1)).name() << std::endl;
    std::cout << get(10.1) << std::endl;
    std::cout << getMax("a", "B") << std::endl;
}
