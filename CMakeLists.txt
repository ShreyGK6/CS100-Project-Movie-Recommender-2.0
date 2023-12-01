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

ADD_EXECUTABLE(runAllTests
    tests.cpp
    movie.cpp
    database.cpp
    Instructions.cpp
    userpass.cpp
    preferences.cpp
    menu.cpp
    settings.cpp
    movierec.cpp
    # main.cpp
)

ADD_EXECUTABLE(runMovieRecSystem
    movie.cpp
    database.cpp
    Instructions.cpp
    userpass.cpp
    preferences.cpp
    movie.cpp
    menu.cpp
)


TARGET_LINK_LIBRARIES(runAllTests gtest)
TARGET_COMPILE_DEFINITIONS(runAllTests PRIVATE gtest_disable_pthreads=ON)

