cmake_minimum_required(VERSION 3.10)

# Declare the project for the task prime numbers
project(PrimeNumbers VERSION 1.0.0 LANGUAGES CXX)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)

# Add the source files
file(GLOB_RECURSE SOURCES ./src/*.cpp)

# Create the executable
add_executable(PrimeExecutable ${SOURCES}
        include/generator/IGenerator.h
        src/generator/impl/PrimeNumbersGenerator.cpp
        include/algo/IAlgo.h
        include/generator/impl/PrimeNumbersGenerator.h
        src/algo/impl/CustomAlgo.cpp
        src/algo/impl/EratosthenesAlgo.cpp
        include/algo/impl/EratosthenesAlgo.h
        include/algo/impl/CustomAlgo.h
        include/util/IPrinter.h
        include/util/impl/ConsolePrinter.h
)

# Include directories for lab-8
target_include_directories(PrimeExecutable PRIVATE
        ./include
)