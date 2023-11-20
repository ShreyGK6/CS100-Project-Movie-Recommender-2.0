CMAKE_MINIMUM_REQUIRED(VERSION 3.2)

add_subdirectory(googletest)
PROJECT(MENU)

ADD_EXECUTABLE(runSearchTest
    searchTests.cpp
    search.cpp
    database.cpp
    movie.cpp
)

ADD_EXECUTABLE(runSearcher
    searchMain.cpp
    database.cpp
    movie.cpp
    search.cpp
)

TARGET_LINK_LIBRARIES(runSearchTest gtest)
TARGET_COMPILE_DEFINITIONS(runSearchTest PRIVATE gtest_disable_pthreads=ON)