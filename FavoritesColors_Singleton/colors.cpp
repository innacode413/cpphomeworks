#include <iostream>
#include "colors.h"

const char* colors[COLOR_COUNT] = {
    "Червоний",
    "Синій",
    "Зелений",
    "Жовтий",
    "Фіолетовий",
    "Блакитний",
    "Білий",
    "Чорний",
    "Помаранчевий",
    "Бежевий",
    "Рожевий",
    "Салатовий",
    "Сірий"
};

FavoriteColors* FavoriteColors::instance = nullptr;

FavoriteColors::FavoriteColors() {
    favoriteColors = 0;
}

FavoriteColors* FavoriteColors::getInstance() {
    if (instance == nullptr) {
        instance = new FavoriteColors();
    }
    return instance;
}

void FavoriteColors::addColor(unsigned int favoriteColor) {
    if (favoriteColor >= static_cast<unsigned int>(COLOR_COUNT)) {
        std::cout << "  [!] Невірний номер! Введіть число від 0 до "
                  << COLOR_COUNT - 1 << ".\n";
        return;
    }
    unsigned int bit = 1u << favoriteColor;
    favoriteColors = favoriteColors | bit;
    std::cout << "  [+] \"" << colors[favoriteColor] << "\" додано до улюблених!\n";
}

void FavoriteColors::removeColor(unsigned int favoriteColor) {
    if (favoriteColor >= static_cast<unsigned int>(COLOR_COUNT)) {
        std::cout << "  [!] Невірний номер! Введіть число від 0 до "
                  << COLOR_COUNT - 1 << ".\n";
        return;
    }
    unsigned int bit = 1u << favoriteColor;
    favoriteColors = favoriteColors & ~bit;
    std::cout << "  [-] \"" << colors[favoriteColor] << "\" видалено з улюблених.\n";
}

void FavoriteColors::showFavorites() const {
    std::cout << "\n  === Ваші улюблені кольори ===\n";
    bool hasAny = false;
    for (int index = 0; index < COLOR_COUNT; index++) {
        unsigned int bit = 1u << index;
        if ((favoriteColors & bit) != 0) {
            std::cout << "  * " << colors[index] << "\n";
            hasAny = true;
        }
    }
    if (!hasAny) {
        std::cout << "  (список порожній — додайте кольори через пункт 1)\n";
    }
    std::cout << "\n";
}
