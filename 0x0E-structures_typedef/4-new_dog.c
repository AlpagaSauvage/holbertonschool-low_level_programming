#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: c
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *c;

	c = malloc(sizeof(dog_t));
	if (c == NULL)
	{
		free(c);
		return (NULL);
	}

	c->name = malloc(sizeof(char) * (_strlen(name)) + 1);
	c->owner = malloc(sizeof(char) * (_strlen(owner)) + 1);
	if (c->name == NULL || c->owner == NULL)
	{
		free(c->name);
		free(c->owner);
		free(c);
		return (NULL);
	}
	_strcpy(c->name, name);
	_strcpy(c->owner, owner);

	c->age = age;
	return (c);
}




/**
 *_strlen - lenght
 *@s: value
 *Return: i
 */


int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
	{
	}
	return (i);
}

/**
 * *_strcpy - copy
 *@dest: value
 *@src: value bis
 *Return: s
 */

char *_strcpy(char *dest, char *src)
{
	char *s = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
