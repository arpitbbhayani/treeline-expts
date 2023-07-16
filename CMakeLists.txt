cmake_minimum_required(VERSION 3.17)
project(HelloTreeLine)

include(FetchContent)

# Define the external project and its repository URL
FetchContent_Declare(
  treeline
  GIT_REPOSITORY https://github.com/mitdbg/treeline.git
  GIT_TAG        master
)
FetchContent_MakeAvailable(treeline)

set(LIBRARY_DIR ${CMAKE_SOURCE_DIR}/lib)
set(INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -pthread")

include_directories(${INCLUDE_DIR})

# Add the source files of the external project
target_include_directories(treeline PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

set(SOURCES
    src/main.cpp
)

add_executable(tl ${SOURCES})

# Link with the .a files
target_link_libraries(tl PRIVATE
    treeline
)
