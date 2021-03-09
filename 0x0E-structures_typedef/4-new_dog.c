#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
* _strlen - returns the length of a string
* @s: char
* Return: length of string
*/

int	_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
* *_strcpy - copies string pointed to by src
* @dest: char destination
* @src: char src
* Return: the pointer to dest
*/
char	*_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
*new_dog - function that creates a new dog
*@name: char
*@age: float
*@owner:char
*Return: new_dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *new_dog;

	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = malloc((_strlen(name) + 1) * sizeof(char));
	if (new_dog->name == NULL)
	{
		free(new_dog->name);
		return (NULL);
	}
	new_dog->name = _strcpy(new_dog->name, name);
	new_dog->age = age;
	new_dog->owner = malloc((_strlen(owner) + 1) * sizeof(char));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = _strcpy(new_dog->owner, owner);
	return (new_dog);
}
