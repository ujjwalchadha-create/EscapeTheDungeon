# Minimum required CMake version
cmake_minimum_required(VERSION 3.16)

# Project name and version
project(DungeonEscape VERSION 1.0 LANGUAGES CXX)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Specify the source files
set(SRC_DIR ${CMAKE_SOURCE_DIR}/src)
set(INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)
set(ASSETS_DIR ${CMAKE_SOURCE_DIR}/assets)

file(GLOB_RECURSE SOURCES "${SRC_DIR}/*.cpp")
file(GLOB_RECURSE HEADERS "${INCLUDE_DIR}/*.h")

# Add executable
add_executable(DungeonEscape ${SOURCES} ${HEADERS})

# Include directories
target_include_directories(DungeonEscape PRIVATE ${INCLUDE_DIR})

# Find and link SFML
find_package(SFML 2.5 COMPONENTS system window graphics audio REQUIRED)
target_link_libraries(DungeonEscape PRIVATE sfml-system sfml-window sfml-graphics sfml-audio)
