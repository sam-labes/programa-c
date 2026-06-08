#include <SDL2/SDL.h>
#include <stdio.h>

int main(){
    SDL_Init(SDL_INIT_VIDEO);
    SDL_Window *window = SDL_CreateWindow("Minha Janela",
        SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED, 800, 600, 0
    );
    SDL_Delay(5000);
}
