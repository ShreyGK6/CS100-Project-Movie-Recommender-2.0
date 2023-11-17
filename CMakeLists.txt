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
