/* converts from degree celsius to fahrenheit and vice versa. */
/* @author: sad */
#include <stdio.h>

float convert( float val, char unit)
{
	if (unit == 'c' || unit == 'C') 
	{
		return ((val / 0.5556) + 32);
	}
	if (unit == 'f' || unit == 'F')
	{
		return ((val - 32) * 0.5556);
	}
	else
	{
		printf("Error: incorrect unit\n");
		return 0.0;
	}
}

char switchUnit(char unit)
{
	if (unit == 'f' || unit == 'F')
	{
		return 'C';
	}
	if (unit == 'c' || unit == 'C')
	{
		return 'F';
	}
}

int main(){
	float x;
	char y;

	printf( "Please enter the temperature: " );
	scanf( "%f", &x );
	getchar();
	printf( "Please enter the unit: ");
  	y = getchar();
  	printf( "The temperature in %c is %f\n", switchUnit(y), convert(x, y));
  	return 0;
}