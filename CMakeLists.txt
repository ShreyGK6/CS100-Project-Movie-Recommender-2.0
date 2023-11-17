CMAKE_MINIMUM_REQUIRED(VERSION 3.2)
add_subdirectory(googletest)

ADD_EXECUTABLE(runTest
    instructionMain.cpp
    Instructions.cpp 

)

ADD_EXECUTABLE(runAllTests
    instructiontest.cpp 
    Instructions.cpp
)

TARGET_LINK_LIBRARIES(runAllTests gtest)
TARGET_COMPILE_DEFINITIONS(runAllTests PRIVATE gtest_disable_pthreads=ON)