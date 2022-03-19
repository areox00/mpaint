#include "hashmap.h"

struct hashmap {
	
};

struct hashmap *hashmap_init(void)
{
	struct hashmap *hashmap = malloc(sizeof(struct hashmap));

	return hashmap;
}

void hashmap_free(struct hashmap *hashmap)
{
	free(hashmap);
}