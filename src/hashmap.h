#ifndef HASHMAP_H
#define HASHMAP_H

struct hashmap;

struct hashmap *hashmap_init(void);
void hashmap_free(struct hashmap *hashmap);

#endif