CMAKE_MINIMUM_REQUIRED(VERSION 3.2)

add_subdirectory(googletest)
PROJECT(MENU)

ADD_EXECUTABLE(runSearchMenuOption
    menu.cpp
    search.cpp
    menuMain.cpp
    database.cpp
    movie.cpp
)

ADD_EXECUTABLE(runSearchTest
    searchTests.cpp
    search.cpp
    database.cpp
    movie.cpp
    menu.cpp
)

TARGET_LINK_LIBRARIES(runSearchTest gtest)
TARGET_COMPILE_DEFINITIONS(runSearchTest PRIVATE gtest_disable_pthreads=ON)