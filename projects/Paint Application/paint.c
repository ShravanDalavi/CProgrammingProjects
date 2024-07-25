#include <SDL2/SDL.h>
#include <stdio.h>
#include <stdbool.h>

#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 600

// Function to handle drawing
void draw(SDL_Renderer *renderer, int x, int y, int size, SDL_Color color) {
    SDL_SetRenderDrawColor(renderer, color.r, color.g, color.b, SDL_ALPHA_OPAQUE);
    SDL_Rect rect = {x - size / 2, y - size / 2, size, size};
    SDL_RenderFillRect(renderer, &rect);
}

int main(int argc, char *argv[]) {
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
        return 1;
    }

    SDL_Window *window = SDL_CreateWindow("Paint Application",
                                          SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
                                          WINDOW_WIDTH, WINDOW_HEIGHT,
                                          SDL_WINDOW_SHOWN);
    if (window == NULL) {
        printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
        SDL_Quit();
        return 1;
    }

    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (renderer == NULL) {
        printf("Renderer could not be created! SDL_Error: %s\n", SDL_GetError());
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 1;
    }

    bool quit = false;
    SDL_Event e;
    int brushSize = 10;
    SDL_Color currentColor = {0, 0, 0, SDL_ALPHA_OPAQUE}; // Default color is black

    while (!quit) {
        while (SDL_PollEvent(&e) != 0) {
            if (e.type == SDL_QUIT) {
                quit = true;
            } else if (e.type == SDL_MOUSEBUTTONDOWN) {
                if (e.button.button == SDL_BUTTON_LEFT) {
                    int x, y;
                    SDL_GetMouseState(&x, &y);
                    draw(renderer, x, y, brushSize, currentColor);
                }
            } else if (e.type == SDL_KEYDOWN) {
                switch (e.key.keysym.sym) {
                    case SDLK_r:
                        currentColor = (SDL_Color){255, 0, 0, SDL_ALPHA_OPAQUE}; // Red
                        break;
                    case SDLK_g:
                        currentColor = (SDL_Color){0, 255, 0, SDL_ALPHA_OPAQUE}; // Green
                        break;
                    case SDLK_b:
                        currentColor = (SDL_Color){0, 0, 255, SDL_ALPHA_OPAQUE}; // Blue
                        break;
                    case SDLK_k:
                        currentColor = (SDL_Color){0, 0, 0, SDL_ALPHA_OPAQUE}; // Black
                        break;
                    case SDLK_w:
                        currentColor = (SDL_Color){255, 255, 255, SDL_ALPHA_OPAQUE}; // White
                        break;
                    case SDLK_UP:
                        brushSize += 1;
                        break;
                    case SDLK_DOWN:
                        if (brushSize > 1) brushSize -= 1;
                        break;
                }
            }
        }
        SDL_RenderPresent(renderer);
    }

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}
