#include <iostream>
#include "calc.h"

int main() {
    int x = 6;
    int y = 2;

    std::cout << x << " + " << y << " = " << add(x, y) << std::endl;
    std::cout << x << " - " << y << " = " << sub(x, y) << std::endl;
    std::cout << x << " * " << y << " = " << mul(x, y) << std::endl;

    return 0;
}

