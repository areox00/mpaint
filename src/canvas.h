#ifndef CANVAS_H
#define CANVAS_H

#include <SDL2/SDL.h>

struct canvas {

};

void update(struct canvas *canvas);
void draw(struct canvas *canvas, SDL_Renderer *renderer);

#endif