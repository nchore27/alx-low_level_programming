#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - creates a new dog
 * @name: new dog's name
 * @age: new dog's age
 * @owner: new dog's owner
 * Return: pointer to new dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_d;
	int x;

	n_d = malloc(sizeof(dog_t));
	if (n_d == NULL)
		return (NULL);
	n_d->name = malloc(sizeof(name) + 1);
	if (n_d->name == NULL)
	{
		free(n_d);
		return (NULL);
	}
	n_d->owner = malloc(sizeof(owner) + 1);
	if (n_d->owner == NULL)
	{
		free(n_d->name);
		free(n_d);
		return (NULL);
	}
	for (x = 0; name[x]; ++x)
		n_d->name[x] = name[x];
	n_d->name[x] = '\0';
	n_d->age = age;
	for (x = 0; owner[x]; ++x)
		n_d->owner[x] = owner[x];
	n_d->owner[x] = '\0';
	return (new_dog);
}
