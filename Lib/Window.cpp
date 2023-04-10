//
// Created by to_matih on 10/04/23.
//

#include "Window.h"

#include <utility>
#include <raylib.h>

Window::Window(int windowWidth, int windowHeight, std::string windowTitle) : width(windowWidth), height(windowHeight), title(std::move(windowTitle)) {
    // create raylib window
    InitWindow(width,height,title.c_str());
    // set constant FPS
    SetTargetFPS(165);
}

Window::~Window() {
    // destroy raylib window
    CloseWindow();
}

bool Window::shouldClose() const{
    return WindowShouldClose();
}
