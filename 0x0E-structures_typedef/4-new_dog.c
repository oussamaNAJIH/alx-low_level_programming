#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * new_dog -  creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: Returns a pointer to the new dog created
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *p;
p = malloc(sizeof(dog_t));
if (p == NULL)
{
return (NULL);
}
p->name = name;
p->age = age;
p->owner = owner;
return (p);
}
