cmake_minimum_required(VERSION 3.25)

project(Lista2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# add_executable(Lista2
#     main.cpp
#     zad1.cpp
#     zad2.cpp
#     zad3.cpp
#     zad4.cpp
#     zad5.cpp
#     zad6.cpp
#     zadania.h
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
# install(TARGETS Lista2
#     LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
#     RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
# )