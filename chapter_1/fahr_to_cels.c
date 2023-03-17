#include <stdio.h>
/* Print fahrenheit-celsius table from 0, 20, 40..300
 * Add a heading above the table
 * */
int main()
{
	float fahr, cels;
	float step_frw = 20.0;
	cels = 0.0;
	fahr = 0.0;
	printf("Celsuis\tFahrnheit\n");
	while(fahr <= 300)
	{
		cels = (5.0/9.0) * (fahr - 32);
		fahr = fahr + step_frw;
		printf("%3.0f:\t%3.1f\n", fahr, cels);		
	}
	printf("\n");
}
