/* converts from degree celsius to fahrenheit and vice versa. */
/* @author: sad */
#include <stdio.h>

const int UNIT_SIZE = 12;

int convert( float* ret, float val, char unit)
{
	if (unit == 'c' || unit == 'C') 
	{
		*ret = ((val / 0.5556) + 32);
		return 0;
	}
	if (unit == 'f' || unit == 'F')
	{
		*ret =  ((val - 32) * 0.5556);
		return 0;
	}
	
	if (unit == 'k' || unit == 'K')
	{
		printf("Error: currently does not support temperatures in Kelvin\n");
	}
	else
	{
		printf("Error: invalid unit\n");
	}
	return -1;
}

void switchUnit(char* str, char unit)
{
	if (unit == 'f' || unit == 'F')
	{
		sprintf(str, "Celsius");
	}
	if (unit == 'c' || unit == 'C')
	{
		sprintf(str, "Fahrenheit");
	}
}


int main(){
	float x;
	float retval;
	char y;
	char error;

	printf( "Please enter the temperature: " );
	scanf( "%f", &x );
	error = getchar();
	if (error != '\n')
	{
		printf("Invalid input\n");
		printf("Try entering only the digits of temperature\n");
		return -1;
	}
	printf( "Please enter the unit: ");
  	y = getchar();
	
	char unit[UNIT_SIZE];
	switchUnit(unit, y);
	
	int conversion = convert(&retval, x, y);
	if (!conversion)
	{
		printf( "The temperature in %s is %f\n", unit, retval);	
	}
  	return conversion;
}