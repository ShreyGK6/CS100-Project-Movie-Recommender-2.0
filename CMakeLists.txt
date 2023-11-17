CMAKE_MINIMUM_REQUIRED(VERSION 3.2)
add_subdirectory(googletest)

ADD_EXECUTABLE(runAllTests
    instructionMain.cpp
    Instructions.cpp
)

ADD_EXECUTABLE(runInstrctionTests
    instructiontest.cpp
)

TARGET_LINK_LIBRARIES(runInstructionTests gtest)