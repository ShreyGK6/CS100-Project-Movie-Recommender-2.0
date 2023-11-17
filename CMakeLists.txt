CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

add_subdirectory(googletest)

ADD_EXECUTABLE(full
    start.cpp
    settingsmain.cpp
    settings.cpp
)

ADD_EXECUTABLE (settingTests
    test/test.cpp
    start.cpp
    settings.cpp
)

TARGET_LINK_LIBRARIES(settingTests gtest)
TARGET_COMPILE_DEFINITIONS(settingTests PRIVATE gtest_disable_pthreads=ON)

PROJECT(MENU)


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

ADD_EXECUTABLE(runInstructions
    instructionMain.cpp
    Instructions.cpp 

)

ADD_EXECUTABLE(runInstructionTests
    instructiontest.cpp 
    Instructions.cpp
)

TARGET_LINK_LIBRARIES(runAllTests gtest)
TARGET_COMPILE_DEFINITIONS(runAllTests PRIVATE gtest_disable_pthreads=ON)

ADD_EXECUTABLE(runDatabase
    databaseSRC/databaseMain.cpp
    database.cpp
    movie.cpp
)

ADD_EXECUTABLE(runDatabaseTest
    databasetest.cpp
    databaseSRC/movie.cpp    
    database.cpp
)

TARGET_LINK_LIBRARIES(runTest gtest)
TARGET_COMPILE_DEFINITIONS(runTest PRIVATE gtest_disable_pthreads=ON)

