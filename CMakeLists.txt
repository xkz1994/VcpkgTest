cmake_minimum_required(VERSION 3.26)
#set(VCPKG_TARGET_TRIPLET "x86-windows" CACHE STRING "" FORCE) # 设置 vcpkg 的 triplet
project(VcpkgTest)

set(CMAKE_CXX_STANDARD 17)
#set(OpenCV_DIR "${USERPROFILE}/scoop/apps/vcpkg/current/installed/x86-windows/share/opencv")
set(jsoncpp_DIR "C:/Users/cy199/scoop/apps/vcpkg/current/installed/x64-mingw-static/share/jsoncpp")

find_package(jsoncpp REQUIRED)
#find_package(opencv REQUIRED)
#include_directories(${OpenCV_INCLUDE_DIRS})

file(GLOB SRC_FILES
        "${PROJECT_SOURCE_DIR}/*.h"
        "${PROJECT_SOURCE_DIR}/*.cpp"
        "${PROJECT_SOURCE_DIR}/*.c"
        "${PROJECT_SOURCE_DIR}/*.cc")

add_executable(${CMAKE_PROJECT_NAME} ${SRC_FILES})
target_link_libraries(${CMAKE_PROJECT_NAME} PRIVATE JsonCpp::JsonCpp)
#target_link_libraries(${CMAKE_PROJECT_NAME} PRIVATE ${OpenCV_LIBS})