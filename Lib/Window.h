//
// Created by to_matih on 10/04/23.
//

#ifndef MODERNCPP_WINDOW_H
#define MODERNCPP_WINDOW_H

#include <string>

class Window {
public:
    // window constants
    const int width;
    const int height;
    const std::string title;

    // lifetime management
    Window(int windowWidth, int windowHeight, std::string windowTitle);
    ~Window();
    Window(const Window&) = delete;
    Window operator=(const Window&) = delete;

    // forward exit button press
    bool shouldClose() const;
};


#endif //MODERNCPP_WINDOW_H
