#include "paint.h"

#include <stdlib.h>
#include "app.h"

static void
paintstate_init(struct app *app)
{

}

void
paintstate_process_event(struct app *app)
{

}

void
paintstate_update(struct app *app)
{

}

void
paintstate_draw(struct app *app)
{

}

struct state *
paintstate_create(struct app *app)
{
	paintstate_init(app);

	return state_create(
		(process_event_fn)paintstate_process_event,
		(update_fn)paintstate_update,
		(draw_fn)paintstate_draw
	);
}