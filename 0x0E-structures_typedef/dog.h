#ifndef _DOG_H_
#define _DOG_H_
/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;
/**
 * struct dog - stores characteristics of a dog
 * @name: name of the dog
 * @owner: owner of the dog
 * @age: age of the dog
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /*_DOG_H_*/
