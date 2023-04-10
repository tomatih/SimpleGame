//
// Created by to_matih on 10/04/23.
//

#ifndef MODERNCPP_WINDOW_H
#define MODERNCPP_WINDOW_H

#include <string>

class Window {
public:
    const int width;
    const int height;
    const std::string title;

    Window(int windowWidth, int windowHeight, std::string windowTitle);
    ~Window();
};


#endif //MODERNCPP_WINDOW_H
