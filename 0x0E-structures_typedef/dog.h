#ifndef STRUCT_DOG_H
#define STRUCT_DOG_H

/**
 * struct dog - for dogs
 * @name: name of the dog element
 * @age: age of the dog element
 * @owner: owner of the dog element
 *
 * Description: structure for any type of dogs
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* STRUCT_DOG_H */
