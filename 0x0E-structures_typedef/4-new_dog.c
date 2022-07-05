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
	dog_t *new_dog;
	int x;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = malloc(sizeof(name) + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = malloc(sizeof(owner) + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (x = 0; name[x]; ++x)
		new_dog->name[x] = name[x];
	new_dog->name[x] = '\0';
	new_dog->age = age;
	for (x = 0; owner[x]; ++x)
		new_dog->owner[x] = owner[x];
	new_dog->owner[x] = '\0';
	return (new_dog);

