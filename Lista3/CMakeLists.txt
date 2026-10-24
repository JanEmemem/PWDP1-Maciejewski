cmake_minimum_required(VERSION 3.25)

project(Lista3 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# add_executable(Lista3
#     main.cpp
# )

add_executable(zad1
    zad1.cpp
)
add_executable(zad2
    zad2.cpp
)
add_executable(zad3
    zad3.cpp
)
add_executable(zad4
    zad4.cpp
)
add_executable(zad5
    zad5.cpp
)
add_executable(zad6
    zad6.cpp
)

include(GNUInstallDirs)