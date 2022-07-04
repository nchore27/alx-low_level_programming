#ifndef DOG_H
#define DOG_H
/**
 * struct dog - description about struct dog
 * @name: name of the dog, pointer to char
 * @age: age of the dog, float
 * @owner: owner of the dog, pointer to char
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* !DOG_H */
