cmake_minimum_required(VERSION 3.10)
project(Tasks VERSION 1.0.0)

# Set C++ standard globally for all projects (optional)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -static -static-libgcc -static-libstdc++")


# Add subdirectories for tasks
add_subdirectory(prime_numbers)