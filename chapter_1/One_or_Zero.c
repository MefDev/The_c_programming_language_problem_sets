#include <stdio.h>

/**
 * main - verify the experssion of getchar() != EOF
 * RETURN 1
 */

int main(void)
{
	if (getchar() != EOF)
	{
		printf("%d\n", (getchar() != EOF));
	}
	return (0);
}
