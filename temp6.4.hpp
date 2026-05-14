#ifndef TEMP_6_4_HPP
#define TEMP_6_4_HPP

#include <iostream>
#include <string>

using namespace std;

template <typename T>
bool hasAdjacentDuplicates(T arr[], int size) {
    if (size < 2) return false;
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] == arr[i + 1]) {
            return true;
        }
    }
    return false;
}

#endif