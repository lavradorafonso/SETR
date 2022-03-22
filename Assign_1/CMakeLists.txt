cmake_minimum_required(VERSION 3.21)
project(SETR C)

set(CMAKE_C_STANDARD 11)

add_executable(SETR
        MySAGAvg.c
        "MySAGFreq().c"
        "MySAGInit().c"
        "MySAGInsert().c"
        MySAGMax.c
        MySAGMin.c)
