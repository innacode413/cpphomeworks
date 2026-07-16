#include <iostream>
#include "memory_calc.h"

int main() {
    std::cout << "=== Тестування Calculator операторів ===\n\n";

    Calculator calc(10);
    std::cout << "Start: " << calc.GetCurrentValue() << "\n\n";

    std::cout << "--- calc + 5 ---\n";
    (calc + 5);
    std::cout << "Result: " << calc.GetCurrentValue() << "\n\n";

    std::cout << "--- calc - 3 ---\n";
    (calc - 3);
    std::cout << "Result: " << calc.GetCurrentValue() << "\n\n";

    std::cout << "--- calc * 2 ---\n";
    (calc * 2);
    std::cout << "Result: " << calc.GetCurrentValue() << "\n\n";

    std::cout << "--- calc / 4 ---\n";
    (calc / 4);
    std::cout << "Result: " << calc.GetCurrentValue() << "\n\n";

    std::cout << "--- Chain: calc += 10, calc -= 2, calc *= 3, calc /= 4 ---\n";
    calc += 10;
    calc -= 2;
    calc *= 3;
    calc /= 4;
    std::cout << "Result: " << calc.GetCurrentValue() << "\n\n";

    std::cout << "--- Mixed chain: calc + 5 * 10 ---\n";
    calc.setStartValue(0);
    calc + 5 * 10;
    std::cout << "Result: " << calc.GetCurrentValue() << "\n\n";

    std::cout << "--- Static: Calculator::calculate(10, 10, '+') ---\n";
    int res = Calculator::calculate(10, 10, '+');
    std::cout << "Result: " << res << "\n";

    return 0;
}
