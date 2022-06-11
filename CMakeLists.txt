cmake_minimum_required(VERSION 3.22)
project(一本通)
#add_executable(1 part01/ch01/1000.cpp)
#add_executable(1086 part02/ch04/1086-角谷猜想.cpp)

#add_executable(1208 ch10-递归/1208-2的幂次方表示.cpp)
#SET(CMAKE_BUILD_TYPE Debug)

# all cpp files
file(GLOB_RECURSE CPP_SRC_LIST ${PROJECT_SOURCE_DIR}/*.cpp)
# generate target for every cpp file
set(i 1)
foreach(v ${CPP_SRC_LIST})
#    string(REGEX REPLACE ".*/\(.*\)" "\\1" fileName ${v})
#    message(${fileName})
    add_executable(p${i} ${v})
    MATH(EXPR i "${i}+1") #增加变量i
endforeach()
