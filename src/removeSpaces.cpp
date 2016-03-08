/*
OVERVIEW: Given a string, remove all spaces in it.
E.g.: Input: "abd scd". Output: "abdscd"

INPUTS: A string.

OUTPUT: Return string after removing spaces.

ERROR CASES: Return '\0' for invalid inputs.

NOTES: Don't create new string.
*/
#include<stddef.h>
char removeSpaces(char *str)
{
	int i=0,  j, len;
	while (str[i] != '\0')
	{
		i++;
	}
	len = i;
	if (str == NULL)
		return '\0';
	
	
	if (str != '\0')
	{


		for (i = 0; i < len; i++)
		{
			if (str[i] == ' ')
			{
				j = i;
				while (j < len)
				{
					str[j] = str[j + 1];
					j++;
				}
				len--;
				i--;
			}
		}
		return *str;
	}
	else
		return '\0';

}