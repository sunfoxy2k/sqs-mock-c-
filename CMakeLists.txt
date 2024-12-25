cmake_minimum_required(VERSION 3.10)

# Set the project name
project(SqsMockCpp)

# Add include directories
include_directories(${CMAKE_SOURCE_DIR})

# Add a library for the SQS class
add_library(SQS SQS.cpp)

# Add an executable and link the SQS library
add_executable(SqsMockCpp main.cpp)
target_link_libraries(SqsMockCpp PRIVATE SQS)
