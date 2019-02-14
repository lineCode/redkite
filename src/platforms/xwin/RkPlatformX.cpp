#include "RkPlatform.h"

std::shared_ptr<RkNativeWindowInfo>
rk_from_native_x11(Display* display, int screenNumber, Window window)
{
        auto info = std::make_unique<RkNativeWindowInfo>();
        info->display = display;
        info->screenNumber = screenNumber;
        info->window = window;
        return info;
}

RkWindowId rk_id_from_x11(Window window)
{
        RkWindowId id;
        id.id = window;
        return id;
}
