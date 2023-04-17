#include <stdlib.h>
#include "dog.h"


/**
* _strlen - a function that gets a length of
*             a string
*
* @str: the str to be counted
*
* Return: returns length of str
*/

int _strlen(char *str)
{
int length = 0;
while (*str++)
length++;

return (length);
}


/**
* _strcopy - a function that returns dest with a cpy
*                       a string from src
*
* @dest: buffer storing str copy
* @src: buffer storing str to cpy
*
* Return: returns dest
*/

char *_strcopy(char *dest, char *src)
{
int a;

for (a = 0; src[a]; a++)
dest[a] = src[a];

dest[a] = '\0';
return (dest);
}


/**
* new_dog - creates a new dog by a function
*
* @name: name of the new dog
* @age: age of the new dog
* @owner: owner of the new dog
*
* Return: struct ptr dog NULL in case
*                      of failure
*/

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dogg;

if (name == NULL || age < 0 || owner == NULL)
return (NULL);

dogg = malloc(sizeof(dog_t));
if (dogg == NULL)
return (NULL);

dogg->name = malloc(sizeof(char) * (_strlen(name) + 1));
if (dogg->name == NULL)
{
free(dogg);
return (NULL);
}

dogg->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if (dogg->owner == NULL)
{
free(dogg->name);
free(dogg);
return (NULL);
}

dogg->name = _strcopy(dogg->name, name);
dogg->age = age;
dogg->owner = _strcopy(dogg->owner, owner);

return (dogg);
}
