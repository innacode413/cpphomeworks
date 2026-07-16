#include <iostream>
#include "vector.h"

int main() {
    std::cout << "=== Тестування класу vector ===\n\n";

    vector v(5);
    std::cout << "Initial size: " << v.getSize() << "\n\n";

    v.set(0, 10);
    v.set(4, 40);

    std::cout << "Element at index 0: " << v.get(0) << "\n";
    std::cout << "Element at index 4: " << v.get(4) << "\n\n";

    std::cout << "--- Resizing to 10 ---\n";
    v.resize(10);
    std::cout << "New size after resize: " << v.getSize() << "\n\n";

    v.set(5, 50);
    std::cout << "Element at index 5: " << v.get(5) << "\n\n";

    std::cout << "--- Resizing to 3 ---\n";
    v.resize(3);
    std::cout << "New size after resize: " << v.getSize() << "\n\n";

    std::cout << "Final element at index 0: " << v.get(0) << "\n";
    std::cout << "Final element at index 2: " << v.get(2) << "\n\n";

    return 0;
}
