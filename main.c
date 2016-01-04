#include <stdio.h>
#include "include/SDL2/SDL.h"

int main(int argc, char** argv) {
    if (SDL_Init(SDL_INIT_VIDEO) != 0) {
        printf("%s", SDL_GetError());
        return 1;
    }

    SDL_Quit();
    return 0;
}
