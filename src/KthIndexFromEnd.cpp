/*
OVERVIEW: Given a string, return the letter at Kth index from the end of the string.
E.g.: Input: "qwertyui", 3. Output: 't' (index starting from zero).

INPUTS: A string and value of K.

OUTPUT: Return the letter at Kth index from the end of the string (index starting from zero).

ERROR CASES: Return '\0' for invalid inputs.

NOTES:
*/
#include<stdlib.h>
#include<string.h>
char KthIndexFromEnd(char *str, int K)
{
	if (str == "" || str == NULL)
		return '\0';
	int i=0;
	
	while (str[i] != '\0')
		i++;
	 
	  if (str != '\0'&&K <= i&&K >= 0)
	 {
		 if (K == 0)
			 return str[i - 1];
		 else if (K == i - 1)
			 return str[0];
		 else if (K == (i - 1) / 2)
			 return str[i / 2];
		 else
			 return str[i - K + 1];

	 }
	 else
		 return '\0';
	
}