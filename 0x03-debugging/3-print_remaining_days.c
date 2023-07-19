#include <stdio.h>

/**
 * print_remaining_days - Takes a date and prints how many days are
 *                        left in the year, taking leap years into account.
 *
 * @month: Month in number format.
 * @day: Day of the month.
 * @year: Year.
 *
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
	int days_in_month = 0;

	if ((year % 4 == 0 || year % 400 == 0) && !(year % 100 == 0))
	{
		days_in_month = 29;
	}
	else
	{
		days_in_month = 28;
	}
	if (month < 1 || month > 12)
	{
		printf("Invalid month: %d\n", month);
		return;
	}
	if (day < 1 || day > days_in_month)
	{
		printf("Invalid day: %d\n", day);
		return;
	}
	printf("Day of the year: %d\n", day);
	printf("Remaining days: %d\n", 366 - day);
}
