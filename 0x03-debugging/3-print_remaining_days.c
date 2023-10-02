#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
	/*check if the year is a leap year (divisible by 4 or divisible by 400)*/
	if (year % 4 == 0 || year % 400 == 0)
	{
		/* If it's a leap year, we enter this block of code*/

		/* Check if it's at least March (month >= 3) */
		/* and day >= 60 (considering leap day) */
		if (month >= 3 && day >= 60)
		{
			day++; /*Increment the day to account */
			/*for the leap day (February 29th)*/
		}
		/* Print the day of the year and */
		/* the remaining days in the year (366 - day).*/
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
	}
	else
	{
		/*If it's not a leap year, we enter this block of code*/

		/*Check if it's February and the day is 60 (invalid date)*/
		if (month == 2 && day == 60)
		{
			/*Print an error message for an invalid date*/
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		}
		else
		{
			/* If it's not February 29th, print the day of the year */
			 /* and the remaining days in the non-leap year (365 - day) */
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 365 - day);
		}
	}
}
