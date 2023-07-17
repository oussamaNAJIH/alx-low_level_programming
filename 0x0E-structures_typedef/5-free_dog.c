#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * free_dog - frees dogs
 * @d: dog to be free
 */

void free_dog(dog_t *d)
{
free(d->name);
free(d->owner);
free(d);
}
