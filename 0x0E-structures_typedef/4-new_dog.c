#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - calculate the lengt of string
 * @s: pointer to char input
 * Return: len (Size s).
 */
int _strlen(char *s)
{
	unsigned long int len = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
}
/**
 * *_strcpy - copy two array a dest with a source
 * @dest: pointer to char array input
 * @src: pointer to char array input
 * Return: pointer to char dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
		*(dest + i) = *(src + i);
	*(dest + i) = '\0';
	return (dest);
}
/**
 * *new_dog - create the new dog type dog_t
 * @name: char pointer input
 * @age: float value input
 * @owner: char pointer input
 * Return: new struct dog created with dog_t type.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog = NULL;
	int size_name = 0, size_owner = 0;
	char *n, *o;

	if (!name || !age || !owner)
		return (NULL);

	my_dog = malloc(sizeof(struct dog));
	if (!my_dog)
		return (NULL);

	size_name = _strlen(name);
	size_owner = _strlen(owner);

	n = malloc(sizeof(char) * size_name + 1);
	if (!n)
	{
		free(my_dog);
		return (NULL);
	}
	o = malloc(sizeof(char) * size_owner + 1);
	if (!o)
	{
		free(n);
		free(my_dog);
		return (NULL);
	}

	_strcpy(n, name);
	_strcpy(o, owner);

	my_dog->name = n;
	my_dog->age = age;
	my_dog->owner = o;
	return (my_dog);
}
