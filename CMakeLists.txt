cmake_minimum_required(VERSION 3.24)

project(GDRus VERSION 1.0.0 LANGUAGES CXX)

find_package(Geode REQUIRED)

add_geode_mod(
    ${PROJECT_NAME}
    SOURCES src/main.cpp
)
