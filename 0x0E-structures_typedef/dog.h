#ifndef DOG_H
#define DOG_H
/**
 * struct dog - the basic information of a dog
 * @name: first info
 * @age: second info
 * @owner: third info
 * Description: This is just the basic information of this dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
