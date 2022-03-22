cmake_minimum_required(VERSION 3.16.3)
project(SETR C)

set(CMAKE_C_STANDARD 11)

add_executable(SETR
        "MySAGAvg.c"
        "MySAGFreq.c"
        "MySAGInit.c"
        "MySAGInsert.c"
        "MySAGMax.c"
        "MySAGMin.c" main.c)
