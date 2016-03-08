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


void number_to_str(float number, char *str, int afterdecimal)
{
	int inumber = 0, temp = 0, count = 0, decimal11, n = 0, val = 1, i, decimal13, count1 = 0;
	float  decimal1, decimal12,temp2;
	if (number < 0)
	{
		count = 1;
		str[0] = '-';
		temp2=1000+number;
		number = 1000 - temp2;
	}
	inumber = number;
	printf("%d\n", inumber);
	decimal1 = number - inumber;
	
	temp = inumber;
	while (temp > 0)
	{
		count++;
		temp = temp / 10;
	}
	n = count;
	
	while (inumber > 0)
	{
		temp = inumber % 10;
		str[count - 1] = temp + 48;
		count--;
		inumber = inumber / 10;
	}
	str[n] = '.';
	

	for (i = 0; i < afterdecimal; i++)
	{
		val = val * 10;
	}
	decimal12 = decimal1*val;
	
	decimal13 = decimal12;

	count1 = 0;
	temp = decimal13;
	while (temp > 0)
	{
		count1++;
		temp = temp / 10;;
	}
	
	while (decimal13 > 0)
	{
		temp = decimal13 % 10;
		str[n + count1] = temp + 48;
		count1--;
		decimal13 = decimal13 / 10;
	}

	printf("end");
	



}



	