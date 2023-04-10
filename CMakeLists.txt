cmake_minimum_required(VERSION 3.24)
project(ModernCPP)

set(CMAKE_CXX_STANDARD 23)

find_package(raylib REQUIRED)
add_compile_options(-Wall -Wextra -pedantic -Werror)
add_definitions(-DVK_USE_PLATFORM_XCB_KHR)

add_executable(ModernCPP main.cpp Lib/Window.h Lib/Window.cpp Lib/FlappyBird.h Lib/FlappyBird.cpp Lib/GameObject.h)
target_link_libraries(ModernCPP PUBLIC raylib)