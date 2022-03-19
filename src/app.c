#include "app.h"

#include "app/paint.h"

struct app *
app_init(void)
{
	struct app *app = malloc(sizeof(struct app));

	app->window = SDL_CreateWindow(
		"mpaint",
		SDL_WINDOWPOS_CENTERED,
		SDL_WINDOWPOS_CENTERED,
		1280,
		720,
		SDL_WINDOW_RESIZABLE
	);

	if (!app->window) {
		fprintf(stderr, "Error! %s", SDL_GetError());
		SDL_ShowSimpleMessageBox(0, "Error!", SDL_GetError(), NULL);
		return NULL;
	}

	app->renderer = SDL_CreateRenderer(
		app->window,
		-1,
		SDL_RENDERER_ACCELERATED
	);

	if (!app->renderer) {
		fprintf(stderr, "Error! %s", SDL_GetError());
		SDL_ShowSimpleMessageBox(0, "Error!", SDL_GetError(), NULL);
		return NULL;
	}

	app->state = paintstate_create(app);

	app->running = true;

	return app;
}

void
app_run(struct app *app)
{
	while (app->running) {
		while (SDL_PollEvent(&app->event)) {
			switch (app->event.type) {
				case SDL_QUIT:
					app->running = false;
			}

			app->state->process_event(app);
		}

		app->state->update(app);

		SDL_RenderClear(app->renderer);
		app->state->draw(app);
		SDL_RenderPresent(app->renderer);
	}
}

void
app_set_state(struct app *app, struct state *state)
{
	app->state = state;
}