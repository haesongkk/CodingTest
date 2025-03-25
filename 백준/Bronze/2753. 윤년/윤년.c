#pragma warning (disable:4996)
#include <stdio.h>
int main()
{
	int year = 0;
	int bLeapYear = 0;
	scanf("%d", &year);
	if(year % 4 == 0 && year % 100 != 0) bLeapYear = 1;
	if(year % 400 == 0) bLeapYear = 1;
	printf("%d", bLeapYear);
}