#ifndef STATE_H
#define STATE_H

struct app;

typedef void (*process_event_fn)(struct app *app);
typedef void (*update_fn)(struct app *app);
typedef void (*draw_fn)(struct app *app);

struct state {
	process_event_fn process_event;
	update_fn update;
	draw_fn draw;
};

struct state *state_create(process_event_fn process_event, update_fn update, draw_fn draw);
void state_free(struct state *state);

#endif