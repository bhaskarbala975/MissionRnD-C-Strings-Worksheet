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
#include<conio.h>
#include<string.h>
void copy(char** common, char buf[20]);
#define SIZE 31
int k = 0, l = 0;

char ** commonWords(char *str1, char *str2)
{
	if (str1 == NULL || str2 == NULL)
		return NULL;
char **a;
char **common;
a = (char**)malloc(100 * 100 * sizeof(char));
common = (char**)malloc(100 * 100 * sizeof(char));
common = NULL;
int i, r1 = 0, c1 = 0, j = 0, t, t2, c, res = 0;
char buf[20], buf2[20];
int row = 0;
for (i = 0; str1[i] != '\0'; i++)
{
	if (str1[i] == ' '&&str1[i + 1] == ' ')
		return NULL;
	else
	{
		if (str1[i] == ' ')
		{
			a[r1][c1] = '\0';
			r1++;
			c1 = 0;
		}
		else
		{
			a[r1][c1] = str1[i];
			c1++;
		}

	}
}
a[r1][c1] = '\0';
row = r1 + 1;
j = 0;
label:
for ( t = 0; str2[j] != '\0'; j++)
{
	if (str2[j] == ' ')
		break;
	else
	{
		buf[t] = str2[j];
		t++;
	}
}
buf[t] = '\0';
for (int r = 0; r<row; r++)
{
	t2 = 0;
	for (c = 0; a[r][c] != '\0'; c++, t2++)
		buf2[t2] = a[r][c];
		buf2[t2] = '\0';
		res = strcmp(buf, buf2);
	if (res == 0)
	{
		copy(common,buf2);
	}
}
if (str2[j] != '\0')
goto label;
return common;
}
void copy(char** common ,char buf2[20])
{
	for (int i = 0; buf2[i] != '\0'; i++)
	{
		common[k][l] = buf2[i];
		l++;
	}
	common[k][l] = '\0';
	l = 0;
	k++;

}