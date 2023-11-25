CMAKE_MINIMUM_REQUIRED(VERSION 3.2)

add_subdirectory(googletest)


ADD_EXECUTABLE(run
    preferences.cpp
    settingsmain.cpp
    userpass.cpp
    settings.cpp
)

ADD_EXECUTABLE(test
    preferences.cpp
    settingsmain.cpp
    userpass.cpp
    tester.cpp
    settings.cpp
)
TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)