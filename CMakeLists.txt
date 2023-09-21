cmake_minimum_required(VERSION 3.26)
project(VcpkgTest)

set(CMAKE_CXX_STANDARD 17)
set(VCPKG_TARGET_TRIPLET "x64-mingw-static" CACHE STRING "" FORCE)

find_package(jsoncpp REQUIRED)

add_executable(VcpkgTest main.cpp)
target_link_libraries(VcpkgTest PRIVATE JsonCpp::JsonCpp)
