#ifndef CHUNK_H
#define CHUNK_H

#define CHUNK_SIZE 512

#include <SDL2/SDL.h>

struct chunk {
	Uint32 pixels[CHUNK_SIZE * CHUNK_SIZE];
};

void set_pixel(struct chunk *chunk, Uint16 x, Uint16 y, SDL_Color color);

#endif