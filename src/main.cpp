#include "SDL2/SDL.h"
#include <iostream>

int main(int argc, char* argv[]){

    SDL_Window* window = nullptr;
    SDL_Renderer* renderer = nullptr;

    SDL_Init(SDL_INIT_VIDEO);
    SDL_CreateWindowAndRenderer(128*10, 32*10, 0, &window, &renderer);
    SDL_RenderSetScale(renderer,10,10);

    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);

    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderDrawPoint(renderer, 128/2, 32/2);

    SDL_RenderPresent(renderer);
    SDL_Delay(10000);

}
