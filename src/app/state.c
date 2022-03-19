#include "state.h"

#include <stdlib.h>

struct state *
state_create(process_event_fn process_event, update_fn update, draw_fn draw)
{
	struct state *state = malloc(sizeof(struct state));

	state->process_event = process_event;
	state->update = update;
	state->draw = draw;

	return state;
}

void
state_free(struct state *state)
{
	free(state);
	state = NULL;
}