/*
OVERVIEW: Given a string, return the letter at Kth index from the end of the string.
E.g.: Input: "qwertyui", 3. Output: 't' (index starting from zero).

INPUTS: A string and value of K.

OUTPUT: Return the letter at Kth index from the end of the string (index starting from zero).

ERROR CASES: Return '\0' for invalid inputs.

NOTES:
*/

char KthIndexFromEnd(char *str, int K) {
	if (str == "" || K<0 || str == nullptr)
		return '\0';
	int i = 0, j = -1;
	while (str[i] != '\0')
	{
		i++;
		if (i > K - 1)
			j++;
	}
	if (j < 0)
		return '\0';
	else if (K == 0) return str[j];
	else return str[j - 1];
}