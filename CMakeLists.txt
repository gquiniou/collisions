project(collisions)

cmake_minimum_required(VERSION 3.13)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(SFML_DIR "D:/devtools/mingw-w64/Libs/SFML-2.5.1/lib/cmake/SFML")

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)
add_executable(collisions main.cpp)

#target_include_directories(collisions PRIVATE imgui)

target_compile_options(collisions PRIVATE -Wall -Wextra -pedantic -Weffc++ -Wno-unused-parameter)
target_link_libraries(collisions sfml-graphics sfml-audio GL)
