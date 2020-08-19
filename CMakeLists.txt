# CMakeList.txt : CMake project for cppDesignPatterns, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("cppDesignPatterns")

file(GLOB Main "*.h" "*.cpp")
file(GLOB Prototype "Prototype/*.h" "Prototype/*.cpp")

# Add source to this project's executable.
add_executable (cppDesignPatterns ${Main} ${Prototype})
# TODO: Add tests and install targets if needed.
