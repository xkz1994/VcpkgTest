cmake_minimum_required(VERSION 3.26)
project(VcpkgTest)

set(CMAKE_CXX_STANDARD 17)
#set(OpenCV_DIR "${VCPKG_INSTALLED_DIR}/x86-windows/share/opencv4")
set(jsoncpp_DIR "${VCPKG_INSTALLED_DIR}/x64-mingw-static/share/jsoncpp")


#find_package(OpenCV REQUIRED)
find_package(jsoncpp REQUIRED)

file(GLOB SRC_FILES
        "${PROJECT_SOURCE_DIR}/*.h"
        "${PROJECT_SOURCE_DIR}/*.cpp"
        "${PROJECT_SOURCE_DIR}/*.c"
        "${PROJECT_SOURCE_DIR}/*.cc")

add_executable(${CMAKE_PROJECT_NAME} ${SRC_FILES})
target_link_libraries(${CMAKE_PROJECT_NAME} PRIVATE JsonCpp::JsonCpp)
#target_link_libraries(${CMAKE_PROJECT_NAME} PRIVATE ${OpenCV_LIBS})