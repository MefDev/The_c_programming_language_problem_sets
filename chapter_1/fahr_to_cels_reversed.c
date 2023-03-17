#include <stdio.h>
/* Print fahrenheit-celsius table from 300, 280, 260.. 0
 * using foor loop ANSI C
 * Add a heading above the table 
 * */
int main()
{
	float fahr, cels;
	cels = 0.0;
	printf("Celsuis\tFahrnheit\n");
	for (fahr = 300; fahr >= 0; fahr -= 20)
	{
		cels = (5.0/9.0) * (fahr - 32);
		printf("%3.0f:\t%3.1f\n", fahr, cels);
	}
	printf("\n");
}
