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
	int a = 0;

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
	int newdog, a = 0;

	while (src[newdog] != '\0')
	{
		newdog++;
	}
	for (a = 0; a < newdog; a++)
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
	int newdog1, newdog2;

	newdog1 = _strlen(name);
	newdog2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (newdog1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->name = malloc(sizeof(char) * (newdog2 + 1));
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
