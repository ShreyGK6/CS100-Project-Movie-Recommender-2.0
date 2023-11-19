CMAKE_MINIMUM_REQUIRED(VERSION 3.2)

add_subdirectory(googletest)
PROJECT(MENU)

ADD_EXECUTABLE(runSetting
    start.cpp
    settingsmain.cpp
    settings.cpp
)

ADD_EXECUTABLE(runMenu
    menuMain.cpp
    menu.cpp
)

ADD_EXECUTABLE(runInstructions
    instructionMain.cpp
    Instructions.cpp 

)

ADD_EXECUTABLE(runDatabase
    databaseMain.cpp
    database.cpp
    movie.cpp
    movierec.cpp
)

ADD_EXECUTABLE(runAllTests
    tests.cpp
    movie.cpp
    database.cpp
    Instructions.cpp
    start.cpp
    menu.cpp
    settings.cpp
)

TARGET_LINK_LIBRARIES(runAllTests gtest)
TARGET_COMPILE_DEFINITIONS(runAllTests PRIVATE gtest_disable_pthreads=ON)

