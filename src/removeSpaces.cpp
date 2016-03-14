/*
OVERVIEW: Given a string, remove all spaces in it.
E.g.: Input: "abd scd". Output: "abdscd"

INPUTS: A string.

OUTPUT: Return string after removing spaces.

ERROR CASES: Return '\0' for invalid inputs.

NOTES: Don't create new string.
*/

char removeSpaces(char *str) {
	int i = 0, j = 0;
	if (str == nullptr)
		return '\0';
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			if (i - j != 1 || i != j)
				str[j] = str[i];
			j++;
		}
		i++;
	}
	str[j] = '\0';
}