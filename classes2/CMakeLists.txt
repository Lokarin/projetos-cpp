cmake_minimum_required(VERSION 3.10.0)
project(teste1 CXX)

file(GLOB_RECURSE SOURCES "src/*.cpp")

include_directories(${PROJECT_SOURCE_DIR}/include)

add_executable(teste1 ${SOURCES})
