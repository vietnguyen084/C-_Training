cmake_minimum_required(VERSION 3.5.1)
project(Blockchain_test)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Blockchain_test
        Block.cpp
        Block.h
        Blockchain.cpp
        Blockchain.h
        main.cpp
        sha256.cpp
        sha256.h)
