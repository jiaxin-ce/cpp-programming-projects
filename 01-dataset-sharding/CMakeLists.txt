cmake_minimum_required(VERSION 4.0)
project(Assignment_4)

set(CMAKE_CXX_STANDARD 20)

add_executable(Assignment_4 DataSharding.cpp
        RankOneTensorType.h
        testDriver.cpp
        IotDataTensor.h
        testDriver2_2.cpp)
