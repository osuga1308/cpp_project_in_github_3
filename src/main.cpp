#include <iostream>
#include "calc.h"

int main() {
    int x = 7;
    int y = 3;

    std::cout << x << " + " << y << " = " << add(x, y) << std::endl;
    std::cout << x << " - " << y << " = " << sub(x, y) << std::endl;

    return 0;
}

