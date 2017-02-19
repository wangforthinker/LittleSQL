cmake_minimum_required(VERSION 3.6)
project(LittleSQL)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        README.md include/store/CStorageEngine.h include/CStatus.h test/test.cpp include/store/CRecode.h)

include_directories(.)

add_executable(LittleSQL ${SOURCE_FILES} include/CStatus.h)