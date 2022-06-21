#include "main.h"
#include <string.h>
/**
 * string_nconcat - concatenates two strings
 *
 * @s1: string 1 to be cat
 * @s2: string 2 to be cat
 * @n: byte limit of str 2
 *
 * Return: pointer to cat'd str on success, NULL on fail
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	int i = 0;
	unsigned int j = 0;
	int len;



	if (n < strlen(s2))
		len = strlen(s1) + n + 1;
	else
		len = strlen(s1) + strlen(s2) + 1;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	s3 = malloc(len * sizeof(char));

	if (s3 == NULL)
		return (NULL);

	while (i < (int) strlen(s1))
	{
		s3[i] = s1[i];
	}

	while ((int) j <= len)
	{
		s3[i] = s2[j];
		i++;
		j++;
	}
	s3[i] = '\0';

	return (s3);
}
