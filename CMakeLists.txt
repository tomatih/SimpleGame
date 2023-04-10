cmake_minimum_required(VERSION 3.24)
project(ModernCPP)

set(CMAKE_CXX_STANDARD 23)

find_package(raylib REQUIRED)
add_compile_options(-Wall -Wextra -pedantic -Werror)
add_definitions(-DVK_USE_PLATFORM_XCB_KHR)

add_executable(ModernCPP main.cpp Lib/Window/Window.h Lib/Window/Window.cpp Lib/FlappyBird/FlappyBird.h Lib/FlappyBird/FlappyBird.cpp Lib/GameObject/GameObject.h Lib/Background/Background.cpp Lib/Background/Background.h Lib/Bird/Bird.cpp Lib/Bird/Bird.h Lib/Pipe/Pipe.cpp Lib/Pipe/Pipe.h)
target_link_libraries(ModernCPP PUBLIC raylib)