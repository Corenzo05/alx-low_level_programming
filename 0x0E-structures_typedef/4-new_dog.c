#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * len - find length of string
 * @str: string
 * Return: length
 */

int len(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}

/*
 * strcpy - copies the string pointed to by src
 * @dest: copy source to this buffer
 * @src: this is the source to copy
 * Return: the pointer to dest
 */

char *strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; i <= len(src); i++)
		dest[i] = src[i];
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogy;
	char *copy_of_name;
	char *copy_of_owner;

	dogy = malloc(sizeof(dog_t));
	if (dogy == NULL)
		return (NULL);

	dogy->age = age;

	if (name != NULL)
	{
		copy_of_name = malloc(len(name) + 1);
		if (copy_of_name == NULL)
		{
			free(dogy);
			return (NULL);
		}
		dogy->name = strcpy(copy_of_name, name);
	}
	else
		dogy->name = NULL;

	if (owner != NULL)
	{
		copy_of_owner = malloc(len(owner) + 1);
		if (copy_of_owner == NULL)
		{
			free(copy_of_name);
			free(dogy);
			return (NULL);
		}
		dogy->owner = strcpy(copy_of_owner, owner);
	}
	else
		dogy->owner = NULL;

	return (dogy);
}
