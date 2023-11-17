CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

add_subdirectory(googletest)

ADD_EXECUTABLE(full
    start.cpp
    settingsmain.cpp
    settings.cpp
)

ADD_EXECUTABLE (runTests
    test/test.cpp
    start.cpp
    settings.cpp
)

TARGET_LINK_LIBRARIES(runTests gtest)
TARGET_COMPILE_DEFINITIONS(runTests PRIVATE gtest_disable_pthreads=ON)
