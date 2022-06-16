#include "main.h"
/**
 * _strcmp - comparing two strings
 * @s1: The first string
 * @s2: The second string
 * Return: int value
 *
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (s1[a] == s2[a] && s1[a] && s2[a])
	{
		a++;
	}
	return (s1[a] - s2[a]);
}

