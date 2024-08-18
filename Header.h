#pragma once
#include <iostream>
#include <vector>
#include <cmath>


template <typename T>
void  print(const std::vector<T>& numbers) {
    std::cout << "[OUT]";
    for (size_t i = 0; i < numbers.size(); ++i) {
        std::cout << (numbers[i] * numbers[i]) << (i < numbers.size() - 1 ? ", " : "");
    }
    std::cout << std::endl;
}