/*
OVERVIEW: Given a string, reverse all the words not the string.

E.g.: Input: "i like coding". Output: "coding like i"

INPUTS: A string.

OUTPUT: Modify the string according to the logic.

NOTES: Don't create new string.
*/
#include <Stdio.h>
#include <string.h>

void str_words_in_rev(char *input, int len)
{
	int i = 0, temp = 0, j = 0, k = 0, max, temp1, max1;
	char t;
	input = strrev(input);
label: i = temp;
	for (; i < len; i++)
	{
		if (input[i] == ' ')
		{
			break;
		}
	}
	max = i - 1;
	max1 = temp;
	while (max1 < max)
	{
		t = input[max];
		input[max] = input[max1];
		input[max1] = t;
		max1++;
		max--;
	}
	temp1 = i+1;
	for (k = temp1; k < len; k++)
	{
		if (input[k] == ' ')
		{

		}
		else
			break;
	}

	temp = k;
	if (input[temp] != '\0')
		goto label;


}
