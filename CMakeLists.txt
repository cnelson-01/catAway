cmake_minimum_required(VERSION 3.10)
project(catAway)

set(CMAKE_CXX_STANDARD 17)

SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -pthread -O2")

add_subdirectory(${CMAKE_SOURCE_DIR}/spdlog/)
add_subdirectory(opencv)

find_package(OpenCV REQUIRED)
find_package(spdlog REQUIRED)

set(source_files
        src/Camera.cpp
        src/ThreadBase.cpp
        src/ThreadBase.h
        src/VideoEvent.cpp
        src/VideoEvent.h
        src/Image.cpp
        src/Image.h
        src/MotionAlgorithm.cpp
        src/MotionAlgorithm.h
        src/Logger.cpp
        src/Logger.h

        )

add_executable(catAway main.cpp ${source_files})

target_link_libraries(catAway ${OpenCV_LIBS})
target_link_libraries(catAway PRIVATE spdlog::spdlog)