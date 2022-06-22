#pragma once

#include <memory>
#include <string>
#include "raylib.h"
#include "type/Vector2.hpp"

namespace blb {

    class Window
    {
    private:

    public:
        Window(int width, int height, std::string title);
        Window(int width, int height, std::string title, int fps);
        ~Window();
        bool shouldClse(void);
        void close(void);
        bool isRdy(void);
        bool isFullscreen(void);
        bool isHide(void);
        bool isMaximized(void);
        bool isMinimized(void);
        bool isFocused(void);
        bool isResized(void);
        bool isState(unsigned int flags);
        static void setState(unsigned int flags);
        void clearState(unsigned int flags);
        void toogleFullscreen(void);
        void maximize(void);
        void minimize(void);
        void restore(void);
        void setIcon(Image image);
        void setTitle(const std::string &title);
        void setPosition(int x, int y);
        void setMonitor(int monitor);
        void setMinSize(int x, int y);
        void setSize(int x, int y);
        void *getHandle(void);
        int getScreenWidth(void);
        int getScreenHeight(void);
        int getMonitorCount(void);
        int getCurrentMonitor(void);
        Vector2<int> getMonitorPosition(int monitor);
        int getMonitorHeight(int monitor);
        int getMonitorWidth(int monitor);
        int getMonitorPhysicalWidth(int monitor);
        int getMonitorPhysicalHeight(int monitor);
        int getMonitorRefreshRate(int monitor);
        Vector2<int> getPosition(void);
        Vector2<int> getScaleDPI(void);
        const std::string getMonitorName(int monitor);
        void setClipBoardText(const std::string &text);
        const std::string getClipBoardText(void);
    };
}
