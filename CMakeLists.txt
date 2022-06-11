cmake_minimum_required(VERSION 3.22)
project(一本通)
#add_executable(1000 ch01-入门/1000.cpp)
#add_executable(1086 ch10-递归/1086-角谷猜想.cpp)
#add_executable(1208 ch10-递归/1208-2的幂次方表示.cpp)
# all cpp files
file(GLOB_RECURSE CPP_SRC_LIST ${PROJECT_SOURCE_DIR}/*.cpp)
# generate target for every cpp file
set(i 1)
foreach(v ${CPP_SRC_LIST})
    add_executable(${i} ${v})
    MATH(EXPR i "${i}+1") #增加变量i
endforeach()
