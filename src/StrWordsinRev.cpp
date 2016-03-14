/*
OVERVIEW: Given a string, reverse all the words not the string.

E.g.: Input: "i like coding". Output: "coding like i"

INPUTS: A string.

OUTPUT: Modify the string according to the logic.

NOTES: Don't create new string.
*/
#include <Stdio.h>
#include <string.h>

void reverse(char *input, int start, int len)
{
	int tot = len - start + 1, i, j;
	char temp;
	if (start != len)
	{
		if (tot % 2 == 0)
		{
			for (i = start, j = len; i<j; i++, j--)
			{
				temp = input[i];
				input[i] = input[j];
				input[j] = temp;
			}
		}
		else
		{
			for (i = start, j = len; i != j; i++, j--)
			{
				temp = input[i];
				input[i] = input[j];
				input[j] = temp;
			}
		}
	}
}

void str_words_in_rev(char *input, int len){
	int i = 0, j = 0;
	while (i<len)
	{
		while (input[i] == ' '&&i<len)
		{
			i++;
		}
		j = i + 1;
		while (input[j] != ' '&&j<len)
		{
			j++;
		}
		reverse(input, i, j - 1);
		i = j;
	}
	reverse(input, 0, len - 1);
}
