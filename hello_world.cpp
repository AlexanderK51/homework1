#include <iostream>
#include "function.h"

void func1() {
    std::cout << "Hello, World! From function in main code" << std::endl;
}

int main() {
    std::cout << "Hello, World! From main code" << std::endl;
    func1();
    example_function();

    return 0;
}