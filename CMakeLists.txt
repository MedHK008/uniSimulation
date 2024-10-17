cmake_minimum_required(VERSION 3.10)

# Set the project name
project(uniSimulation)

# Add the executable
add_executable(uniSimulation main.cpp
                Unique.cpp
                Unique.h
                Shared.cpp
                Shared.h
                Raw.cpp
                Raw.h
                Table.cpp
                Table.h
)