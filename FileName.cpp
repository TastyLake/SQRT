#include <iostream>
#include "header.h"
#include <cmath>
#define HEADER_H

#include <vector>

int main() {

    std::vector<int> numbers{};
    std::cout << "IN:" << std::endl;

    int input;
    do {
        std::cin >> input;
        numbers.push_back(input);
    } while (input != 0);

    print(numbers);




}