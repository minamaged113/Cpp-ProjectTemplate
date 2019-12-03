cmake_minimum_required(VERSION 2.8.9)
project(ProjectTemplate)

# include header files into build env
include_directories(include)

# include all source codes in src
file(GLOB SOURCES
	${PROJECT_SOURCE_DIR}/src/*.cpp
	${PROJECT_SOURCE_DIR}/src/Class1/*.cpp
	${PROJECT_SOURCE_DIR}/src/Class2/*.cpp)

add_executable(ProjectTemplate ${SOURCES})
