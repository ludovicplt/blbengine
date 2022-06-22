#include "Window.hpp"
#include "raylib.h"
#include <string>

namespace blb {

    Window::Window(int x, int y, std::string name)
    {
        InitWindow(x, y, name.c_str());
        SetTargetFPS(160);
    }

    Window::Window(int x, int y, std::string name, int fps)
    {
        InitWindow(x, y, name.c_str());
        SetTargetFPS(fps);
    }

    Window::~Window()
    {

    }

    bool Window::shouldClse(void)
    {
        return (WindowShouldClose());
    }

    void Window::close(void)
    {
        CloseWindow();
    }

    bool Window::isRdy(void)
    {
        return (IsWindowReady());
    }

    bool Window::isFullscreen(void)
    {
        return (IsWindowFullscreen());
    }

    bool Window::isHide(void)
    {
        return (IsWindowHidden());
    }

    bool Window::isMaximized(void)
    {
        return (IsWindowMaximized());
    }

    bool Window::isMinimized(void)
    {
        return (IsWindowMinimized());
    }

    bool Window::isFocused(void)
    {
        return (IsWindowFocused());
    }

    bool Window::isResized(void)
    {
        return (IsWindowResized());
    }

    bool Window::isState(unsigned int flags)
    {
        return (IsWindowState(flags));
    }

    void Window::setState(unsigned int flags)
    {
        SetWindowState(flags);
    }

    void Window::clearState(unsigned int flags)
    {
        ClearWindowState(flags);
    }

    void Window::toogleFullscreen(void)
    {
        ToggleFullscreen();
    }

    void Window::maximize(void)
    {
        MaximizeWindow();
    }

    void Window::minimize(void)
    {
        MinimizeWindow();
    }

    void Window::restore(void)
    {
        RestoreWindow();
    }

    void Window::setIcon(Image image)
    {
        SetWindowIcon(image);
    }

    void Window::setTitle(const std::string &title)
    {
        SetWindowTitle(title.c_str());
    }

    void Window::setPosition(int x, int y)
    {
        SetWindowPosition(x, y);
    }

    void Window::setMonitor(int monitor)
    {
        SetWindowMonitor(monitor);
    }

    void Window::setMinSize(int x, int y)
    {
        SetWindowMinSize(x, y);
    }

    void Window::setSize(int x, int y)
    {
        SetWindowSize(x, y);
    }

    void *Window::getHandle(void)
    {
        return (GetWindowHandle());
    }

    int Window::getScreenWidth(void)
    {
        return (GetScreenWidth());
    }

    int Window::getScreenHeight(void)
    {
        return (GetScreenHeight());
    }

    int Window::getMonitorCount(void)
    {
        return (GetMonitorCount());
    }

    int Window::getCurrentMonitor(void)
    {
        return (GetMonitorCount());
    }

    Vector2<int> Window::getMonitorPosition(int monitor)
    {
        return (Vector2<int>(0,0));
    }

    int Window::getMonitorHeight(int monitor)
    {
        return (GetMonitorHeight(monitor));
    }

    int Window::getMonitorWidth(int monitor)
    {
        return (GetMonitorWidth(monitor));
    }

    int Window::getMonitorPhysicalWidth(int monitor)
    {
        return (GetMonitorPhysicalWidth(monitor));
    }

    int Window::getMonitorPhysicalHeight(int monitor)
    {
        return (GetMonitorPhysicalHeight(monitor));
    }

    int Window::getMonitorRefreshRate(int monitor)
    {
        return (GetMonitorRefreshRate(monitor));
    }

    Vector2<int> Window::getPosition(void)
    {
        return (Vector2<int>(0,0));
    }

    Vector2<int> Window::getScaleDPI(void)
    {
        return (Vector2<int>(0,0));
    }

    const std::string Window::getMonitorName(int monitor)
    {
        return (std::string(GetMonitorName(monitor)));
    }

    void Window::setClipBoardText(const std::string &text)
    {
        SetClipboardText(text.c_str());
    }

    const std::string Window::getClipBoardText(void)
    {
        return (std::string(GetClipboardText()));
    }
}
