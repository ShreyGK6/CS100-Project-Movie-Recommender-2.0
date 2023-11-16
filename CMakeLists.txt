CMAKE_MINIMUM_REQUIRED(VERSION 3.2)
ADD_SUBDIRECTORY(googletest)

ADD_EXECUTABLE(runDatabase
    main.cpp
    database.cpp
    movie.cpp
)

ADD_EXECUTABLE(runTest
    databasetest.cpp
    movie.cpp    
    database.cpp
)

TARGET_LINK_LIBRARIES(runTest gtest)
TARGET_COMPILE_DEFINITIONS(runTest PRIVATE gtest_disable_pthreads=ON)