#include <stdlib.h>
#include "dog.h"


/**
 * len_find - finds the length of a string
 *
 * @s: string
 *
 * Return: the length of the string
 */

int len_find(char *s)
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
 * copy_str - copies the string pointed to by src including the null byte
 * to the buffer pointed to by dest
 *
 * @A: the buffer we copy the string
 * @s: the string to be copied
 *
 * Return: the pointer to dest
 */


char *copy_str(char *A, char *s)
{
	int i, len;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		A[i] = s[i];
	}
	A[i] = '\0';

	return (A);
}



/**
 * new_dog - function that creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: pointer to the new dog or  NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;
	int len1, len2;

	len1 = len_find(name);
	len2 = len_find(owner);

	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
		return (NULL);

	doggo->name = malloc(sizeof(char) * (len1 + 1));
	if (doggo->name == NULL)
	{
		free(doggo);
		return (NULL);
	}
	doggo->owner = malloc(sizeof(char) * (len2 + 1));
	if (doggo->owner == NULL)
	{
		free(doggo);
		free(doggo->name);
		return (NULL);
	}
	copy_str(doggo->name, name);
	copy_str(doggo->owner, owner);
	doggo->age = age;

	return (doggo);
}
