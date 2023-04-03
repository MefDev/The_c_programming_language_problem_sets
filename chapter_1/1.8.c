#include <stdio.h>

/**
 * main - Count blanks, tabs, and newlines
 * RETURN 0
 */

int main(void)
{
	int c, counter;

	counter = 0;
	while ((c = getchar()) != EOF)
	{
		if (c == '\n' || c == '\t' || c == ' ')
		{
			++counter;
		}
		if (c == '0') /* Enter 0 to stop the program from running */
			break;
	}
	printf("Counter: %d", counter);
	return (0);
}
