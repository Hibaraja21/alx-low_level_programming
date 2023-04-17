#ifndef DOG_H
#define DOG_H

/**
 * struct dog - new type of data: a dog struct
 *
 * @name: name of dog
 * @age: dog's age
 * @owner: name of owner
 *
 * description: just a lone dog struct in a big kitty world
*/

struct dog
{
	char *name;
	char *owner;
	float age;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);



#endif
