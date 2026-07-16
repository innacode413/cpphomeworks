#include <iostream>
#include "menu.h"
#include "colors.h"

void printMainMenu() {
    std::cout << "\n╔══════════════════════════════╗\n";
    std::cout << "║      УЛЮБЛЕНІ КОЛЬОРИ        ║\n";
    std::cout << "╠══════════════════════════════╣\n";
    std::cout << "║  1. Додати колір             ║\n";
    std::cout << "║  2. Видалити колір           ║\n";
    std::cout << "║  3. Показати улюблені        ║\n";
    std::cout << "║  4. Вийти                    ║\n";
    std::cout << "╚══════════════════════════════╝\n";
    std::cout << "  Ваш вибір: ";
}

void printAddColorMenu() {
    std::cout << "\n  Список кольорів:\n";
    for (int idx = 0; idx < COLOR_COUNT; idx++) {
        std::cout << "  " << idx << ". " << colors[idx] << "\n";
    }
    std::cout << "  Введіть номер кольору для додавання: ";
}

void printRemoveColorMenu() {
    std::cout << "\n  Список кольорів:\n";
    for (int idx = 0; idx < COLOR_COUNT; idx++) {
        std::cout << "  " << idx << ". " << colors[idx] << "\n";
    }
    std::cout << "  Введіть номер кольору для видалення: ";
}
