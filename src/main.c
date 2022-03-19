#include "app.h"

int
main()
{
	if (SDL_Init(SDL_INIT_EVERYTHING) < 0) {
		fprintf(stderr, "Error! %s", SDL_GetError());
		SDL_ShowSimpleMessageBox(0, "Error!", SDL_GetError(), NULL);

		return 1;
	}

	struct app *app = app_init();
	app_run(app);

	return 0;
}