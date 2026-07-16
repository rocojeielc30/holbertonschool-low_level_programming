#include <stdio.h>

/**
 * add- adds two integers together
 * subtract- takes an integer away from another
 * multiply- takes an integer and multiplies it with another
 * divide- takes an integer and divides it by another
 * Main- calculator functions and options
 *
 * Return: always 0 - success
 */

void add(void)
{
	int a;
	int b;
	int sum;

	printf("Enter value 1: \n");
	scanf("%d", &a);
	printf("Enter value 2: \n");
	scanf("%d", &b);
	sum = a + b;
	printf("%d + %d = %d\n", a, b, sum);

}

void subtract(void)
{
	int a;
	int b;
	int sum;

	printf("Enter value 1: \n");
	scanf("%d", &a);
	printf("Enter value 2: \n");
	scanf("%d", &b);
	sum = a - b;
	printf("%d - %d = %d\n", a, b, sum);

}

void multiply(void)
{
	int a;
	int b;
	int sum;

	printf("Enter value 1: \n");
	scanf("%d", &a);
	printf("Enter value 2: \n");
	scanf("%d", &b);
	sum = a * b;
	printf("%d x %d = %d\n", a, b, sum);

}

void divide(void)
{
	int a;
	int b;
	int sum;

	printf("Enter value 1: \n");
	scanf("%d", &a);
	printf("Enter value 2: \n");
	scanf("%d", &b);
	sum = a / b;
	if (b == 0)
	{
		printf("Error: division by zero");
	}
	else
	{
		printf("%d divided by %d is %d", a, b, sum);
	}



}

int main(void)
{
	int choice;

	do {
		printf("Watta doin'!\n");
		printf("Simple Calculator\n");
		printf("1) Add\n");
		printf("2) Subtract\n");
		printf("3) Multiply\n");
		printf("4) Divide\n");
		printf("0) Quit\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);

		if (choice > 4 || choice < 0)
		{
			printf("Invalid choice, please try again: \n");
		}
	} while (choice > 4 || choice < 0);

	if (choice == 1)
	{
		add();
	}
	if (choice == 2)
	{
		subtract();
	}
	if (choice == 3)
	{
		multiply();
	}
	if (choice == 4)
	{
		divide();
	}
	return (0);
}
