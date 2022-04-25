#include <stdio.h>

/**
 * fibonacci - caleld by main()
 * Return: without return
 */
void fibonacci(void)
{
	int i, val;
	unsigned long int num1 = 0, num1Tail, num2 = 1, num2Tail;
	unsigned long int tmpResult, tmpResultTail;

	for (i = 1; i <= 92; i++)
	{
		tmpResult = num1 + num2;
		printf("%lu", tmpResult);
		putchar(',');
		putchar(' ');
		num1 = num2;
		num2 = tmpResult;
	}
	num1Tail = num1 % 1000000000;
	num1 = num1 / 1000000000;
	num2Tail = num2 % 1000000000;
	num2 = num2 / 1000000000;
	for (i = 93; i <= 98; i++)
	{
		tmpResult = num1 + num2;
		tmpResultTail = num1Tail + num2Tail;
		val = tmpResultTail / 1000000000;
		if (val)
		{
			tmpResult = tmpResult + val;
			tmpResultTail = tmpResultTail % 1000000000;
		}
		printf("%lu%lu", tmpResult, tmpResultTail);
		num1 = num2;
		num1Tail = num2Tail;
		num2 = tmpResult;
		num2Tail = tmpResultTail;
		if (i < 98)
			printf(", ");
	}
	printf("\n");
}

/**
 * main - Initial function
 * Return: return 0 to success
 */
int main(void)
{
	fibonacci();
	return (0);
}
