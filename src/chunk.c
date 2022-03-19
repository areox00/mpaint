#include "chunk.h"

void
set_pixel(struct chunk *chunk, Uint16 x, Uint16 y, SDL_Color color)
{
    Uint32 converted = (color.r << 8 | color.g << 16 | color.b << 24 | color.a);
    chunk->pixels[x + y * CHUNK_SIZE] = converted;
}