/*
OVERVIEW: Given two strings, find the words that are common to both the strings.
E.g.: Input: "one two three", "two three five".  Output: "two", "three".

INPUTS: Two strings.

OUTPUT: common words in two given strings, return 2D array of strings.

ERROR CASES: Return NULL for invalid inputs.

NOTES: If there are no common words return NULL.
*/

#include <stdio.h>

#include <malloc.h>

#define SIZE 31

char ** commonWords(char *str1, char *str2) {
	if (str1 == "" || str2 == "" || str1 == nullptr || str2 == nullptr)
		return NULL;
	int flag = 0, i = 0, j = 0, k = 0, l, m = 0, n = 0, x = 0;
	char **result = (char**)calloc(SIZE, sizeof(char*));
	for (i = 0; i<SIZE; i++)
		result[i] = (char*)calloc(SIZE, sizeof(char));
	i = 0;
	while (str1[i] != '\0')
	{
		while (str1[i] == ' '&&str1[i] != '\0')
		{
			i++;
		}
		j = i;
		while (str1[j] != ' '&&str1[j] != '\0')
		{
			j++;
		}
		k = 0;
		l = i - 1;
		while (str2[k] != '\0'&&i != j)
		{
			while (str2[k] == ' '&&str2[k] != '\0')
			{
				k++;
			}
			if (str2[k] == str1[l + 1])
			{
				l++;
				x = 1;
			}
			else
			{
				l = i - 1;
				x = 0;
			}
			if (l == j - 1)
			{
				flag = 1;
				for (m = 0; i < j; m++, i++)
					result[n][m] = str1[i];
				result[n][m] = '\0';
				n++;
				break;
			}
			k++;
			while (str2[k] != ' '&&str2[k] != '\0'&&x == 0)
			{
				k++;
			}
		}
		i = j;
	}

	if (flag == 0)
		return NULL;
	else return result;
}