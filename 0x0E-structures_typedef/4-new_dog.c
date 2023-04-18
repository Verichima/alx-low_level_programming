#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - the length of a string
 * @s: the string
 *
 * Return: After evaluation the length of the string is returned.
 */

int _strlen(char *s)
{
	int a;
	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}

/**
 * *_strcpy - function that copies the pointed string
 * @dest: pointer where the string is copied
 * @src: the string to be copied
 *
 * Return: pointer
 */

char *_strcpy(char *dest, char *src)
{
	int d, a;
	d = 0;

	while (src[d] != '\0')
	{
		d++;
	}
	for (a = 0; a < d; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';
	return (dest);
}

/**
 * *new_dog - function name of a new dog
 * @name: Its name
 * @age: Its age
 * @owner: the owner of the dog
 *
 * Return: When succesful do will be returned, otherwise NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int d1, d2;

	d1 = _strlen(name);
	d2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (d1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->name = malloc(sizeof(char) * (d2 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
