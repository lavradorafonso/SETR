cmake_minimum_required(VERSION 3.16)
project(SETR C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(SETR
        main.c
        module.h
        MySAGAvg.c
        MySAGFreq.c
        MySAGInit.c
        MySAGInsert.c
        MySAGMax.c
        MySAGMin.c)
