#pragma once

class vector {
public:
    vector(int sizeOffArray);
    ~vector();

    void resize(int newSize);
    void set(int index, int newValue);
    int get(int index) const;
    int getSize() const;

private:
    int size;
    int* dynamicArray;
};
