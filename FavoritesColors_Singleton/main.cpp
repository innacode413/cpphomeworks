#include <iostream>
#include "colors.h"
#include "menu.h"

int main() {
    FavoriteColors* manager = FavoriteColors::getInstance();

    while (true) {
        printMainMenu();

        int input = 0;
        std::cin >> input;

        switch (input) {
            case 1: {
                printAddColorMenu();
                unsigned int color = 0;
                std::cin >> color;
                manager->addColor(color);
                break;
            }
            case 2: {
                printRemoveColorMenu();
                unsigned int color = 0;
                std::cin >> color;
                manager->removeColor(color);
                break;
            }
            case 3:
                manager->showFavorites();
                break;
            case 4:
                std::cout << "  До побачення!\n";
                return 0;
            default:
                std::cout << "  [!] Невірний вибір. Введіть число від 1 до 4.\n";
        }
    }
}
