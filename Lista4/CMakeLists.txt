cmake_minimum_required(VERSION 3.25)

project(Lista4 LANGUAGES CXX)

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
# add_executable(zad3
#     zad3.cpp
# )
include(GNUInstallDirs)