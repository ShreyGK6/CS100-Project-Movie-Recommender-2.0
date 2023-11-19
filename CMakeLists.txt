CMAKE_MINIMUM_REQUIRED(VERSION 3.2)

add_subdirectory(googletest)

ADD_EXECUTABLE(runInstructions
    instructionMain.cpp
    Instructions.cpp 

)

ADD_EXECUTABLE(runInstructionTests
    instructiontest.cpp 
    Instructions.cpp
)

TARGET_LINK_LIBRARIES(runInstructionTests gtest)
TARGET_COMPILE_DEFINITIONS(runInstructionTests PRIVATE gtest_disable_pthreads=ON)
