#pragma once
#include "pch.h"

namespace fuse::inputs
{
    FUSE_API void initialize(SDL_Window *);
    FUSE_API void dispatch_events();
    FUSE_API bool is_key(int);
}