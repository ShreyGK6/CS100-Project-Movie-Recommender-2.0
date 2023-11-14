CMAKE_MINIMUM_REQUIRED(VERSION 3.2)
PROJECT(MENU)
add_subdirectory(googletest)

add_library(simpleLibrary
  menu.cpp
)

find_library(M_LIB m)
target_link_libraries(simpleLibrary ${M_LIB})

ADD_EXECUTABLE(run
    menuMain.cpp
)

add_executable(menuTests
    menuTest.cpp
)

target_link_libraries(menuTests gmock gtest gtest_main)
target_link_libraries(menuTests simpleLibrary)

include_directories(
  ${CMAKE_SOURCE_DIR}/googletest/include/
  ${CMAKE_SOURCE_DIR}/googlemock/include/
)
