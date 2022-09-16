#include "pch.h"
#include "inputs.h"

namespace fuse::inputs
{
    static const uint8_t *keyboard = NULL;

    bool is_key(int key)
    {
        return keyboard[key];
    }

    void initialize(SDL_Window *window)
    {
        keyboard = SDL_GetKeyboardState(NULL);
    }

    void dispatch_events()
    {
        static SDL_Event event;
        while (SDL_PollEvent(&event))
        {
            switch (event.type)
            {
            case SDL_KEYDOWN:
                keyboard = SDL_GetKeyboardState(NULL);
                break;
            case SDL_KEYUP:
                keyboard = SDL_GetKeyboardState(NULL);
                break;
            }
        }
    }
}