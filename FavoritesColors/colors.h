#pragma once

const int COLOR_COUNT = 13;
extern const char* colors[COLOR_COUNT];

class FavoritesManager {
public:
    FavoritesManager();

    void addColor(unsigned int favoriteColor);
    void removeColor(unsigned int favoriteColor);
    void showFavorites() const;

private:
    unsigned int favoriteColors;
};
