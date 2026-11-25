cmake_minimum_required(VERSION 3.22)

project(GillaPurpleMenu)

add_library(
    GillaMenu
    SHARED
    menu.cpp
)

target_compile_features(GillaMenu PRIVATE cxx_std_17)

set_target_properties(
    GillaMenu
    PROPERTIES
    OUTPUT_NAME "GillaPurpleMenu"
)
