cmake_minimum_required(VERSION 3.10)
project(FavoritesColors)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(FavoritesColors 
    main.cpp 
    colors.cpp 
    colors.h 
    menu.cpp 
    menu.h
)
