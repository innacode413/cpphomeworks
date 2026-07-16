#include "vector.h"

vector::vector(int sizeOffArray) {
    if (sizeOffArray <= 0) {
        size = 0;
        dynamicArray = nullptr;
    } else {
        size = sizeOffArray;
        dynamicArray = new int[size]{};
    }
}

vector::~vector() {
    delete[] dynamicArray;
}

void vector::resize(int newSize) {
    if (newSize <= 0) {
        size = 0;
        delete[] dynamicArray;
        dynamicArray = nullptr;
        return;
    }

    int* tempArray = new int[newSize]{};

    int elementsToCopy = (newSize < size) ? newSize : size;
    for (int i = 0; i < elementsToCopy; ++i) {
        tempArray[i] = dynamicArray[i];
    }

    delete[] dynamicArray;
    dynamicArray = tempArray;
    size = newSize;
}

void vector::set(int index, int newValue) {
    if (index >= 0 && index < size) {
        dynamicArray[index] = newValue;
    }
}

int vector::get(int index) const {
    if (index >= 0 && index < size) {
        return dynamicArray[index];
    }
    return -1;
}

int vector::getSize() const {
    return size;
}
