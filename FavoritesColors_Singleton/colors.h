#pragma once

const int COLOR_COUNT = 13;
extern const char* colors[COLOR_COUNT];

class FavoriteColors {
public:
    static FavoriteColors* getInstance();

    void addColor(unsigned int favoriteColor);
    void removeColor(unsigned int favoriteColor);
    void showFavorites() const;

private:
    static FavoriteColors* instance;
    unsigned int favoriteColors;

    FavoriteColors();

    FavoriteColors(const FavoriteColors&) = delete;
    FavoriteColors& operator=(const FavoriteColors&) = delete;
};
