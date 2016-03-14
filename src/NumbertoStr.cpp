/*
OVERVIEW: Given a float number ,Convert it into a string 

INPUTS: A Float,Final string ,How many digits after decimal has to be displayed .
Its zero for integers.


OUTPUT: No need to output anything ,Modify the str in function parameter such that it
now holds the string format of the float number specified

Example : number_to_str(345,str,0);
Should copy "345\0" in the str;
number_to_str(345.342,str,2);
Should copy "345.34" in the str;

NOTES: Don't create new string.

*/

#include <stdio.h>


void number_to_str(float number, char *str,int afterdecimal){
	int i, r, tl = 0, num, p = 1, ad = afterdecimal, len = 0, check = 10;
	if (number < 0.0)
	{
		len++;
		number = number - 2 * number;
	}
	len++;
	while (number > check)
	{
		len++;
		check = check * 10;
	}
	len = len + ad;
	if (ad != 0)
		len++;
	tl = len - 1;
	str[len] = '\0';
	while (ad != 0)
	{
		p = p * 10;
		ad--;
	}
	num = number*p;
	do
	{
		len--;
		if (tl - afterdecimal == len&&afterdecimal > 0)
			str[len] = '.';
		else
		{
			r = num % 10;
			str[len] = r + '0';
			num = num / 10;
		}
	} while (num != 0);
	if (len == 1)
		str[--len] = '-';
}
