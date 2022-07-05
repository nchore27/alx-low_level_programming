#ifndef DOG_H
#define DOG_H

/**
 * struct dog - description about struct dog
 * @name: name of the dog, pointer to char
 * @age: age of the dog, float
 * @owner: owner of the dog, pointer to char
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
