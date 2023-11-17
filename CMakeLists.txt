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
