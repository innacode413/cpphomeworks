#include <iostream>
#include <typeinfo>
#include <limits>

int main() {

    int var_int = 42;
    short var_short = 15;
    long var_long = 3000000L;
    float var_float = 3.14f;
    double var_double = 2.71828;
    bool var_bool = true;

    std::cout << "=== TYPE: int ===" << std::endl;
    std::cout << "Type name: " << typeid(var_int).name() << std::endl;
    std::cout << "Size in bytes: " << sizeof(var_int) << std::endl;
    std::cout << "Min value: " << std::numeric_limits<int>::min() << std::endl;
    std::cout << "Max value: " << std::numeric_limits<int>::max() << std::endl;
    std::cout << "-----------------" << std::endl << std::endl;

    std::cout << "=== TYPE: short ===" << std::endl;
    std::cout << "Type name: " << typeid(var_short).name() << std::endl;
    std::cout << "Size in bytes: " << sizeof(var_short) << std::endl;
    std::cout << "Min value: " << std::numeric_limits<short>::min() << std::endl;
    std::cout << "Max value: " << std::numeric_limits<short>::max() << std::endl;
    std::cout << "-------------------" << std::endl << std::endl;

    std::cout << "=== TYPE: long ===" << std::endl;
    std::cout << "Type name: " << typeid(var_long).name() << std::endl;
    std::cout << "Size in bytes: " << sizeof(var_long) << std::endl;
    std::cout << "Min value: " << std::numeric_limits<long>::min() << std::endl;
    std::cout << "Max value: " << std::numeric_limits<long>::max() << std::endl;
    std::cout << "------------------" << std::endl << std::endl;

    std::cout << "=== TYPE: float ===" << std::endl;
    std::cout << "Type name: " << typeid(var_float).name() << std::endl;
    std::cout << "Size in bytes: " << sizeof(var_float) << std::endl;
    std::cout << "Min value: " << std::numeric_limits<float>::min() << std::endl;
    std::cout << "Max value: " << std::numeric_limits<float>::max() << std::endl;
    std::cout << "-------------------" << std::endl << std::endl;

    std::cout << "=== TYPE: double ===" << std::endl;
    std::cout << "Type name: " << typeid(var_double).name() << std::endl;
    std::cout << "Size in bytes: " << sizeof(var_double) << std::endl;
    std::cout << "Min value: " << std::numeric_limits<double>::min() << std::endl;
    std::cout << "Max value: " << std::numeric_limits<double>::max() << std::endl;
    std::cout << "--------------------" << std::endl << std::endl;

    std::cout << "=== TYPE: bool ===" << std::endl;
    std::cout << "Type name: " << typeid(var_bool).name() << std::endl;
    std::cout << "Size in bytes: " << sizeof(var_bool) << std::endl;
    std::cout << "Min value: " << std::numeric_limits<bool>::min() << std::endl;
    std::cout << "Max value: " << std::numeric_limits<bool>::max() << std::endl;
    std::cout << "------------------" << std::endl << std::endl;

    return 0;
}
