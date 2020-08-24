# CMakeList.txt : CMake project for cppDesignPatterns, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("cppDesignPatterns")

file(GLOB Main "*.h" "*.cpp")
file(GLOB Prototype "Prototype/*.h" "Prototype/*.cpp")
file(GLOB AbstractFactory "AbstractFactory/*.h" "AbstractFactory/*.cpp")
file(GLOB Builder "Builder/*.h" "Builder/*.cpp")
file(GLOB Adapter "Adapter/*.h" "Adapter/*.cpp")

# Add source to this project's executable.
add_executable (cppDesignPatterns ${Main} ${Prototype} ${AbstractFactory} ${Builder} ${Adapter})
# TODO: Add tests and install targets if needed.
