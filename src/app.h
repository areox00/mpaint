#ifndef APP_H
#define APP_H

#include <SDL2/SDL.h>
#include <stdbool.h>
#include "app/state.h"

struct app {
	SDL_Window *window;
	SDL_Renderer *renderer;
	SDL_Event event;

	struct state *state;

	bool running;
};

struct app *app_init(void);
void app_run(struct app *app);
void app_set_state(struct app *app, struct state *state);

#endif