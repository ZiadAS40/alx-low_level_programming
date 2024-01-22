#ifndef DOG_H
#define DOG_H
/**
 * struct dog - define a new structure.
 * @name: the name of the dog.
 * @age: the age of the dog.
 * @owner: the owner of it.
 *
 * Description: a structure of a dog contains name, age and owner as members.
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
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
