#include <stdio.h>

/**
 * add - Adds two integers entered by the user
 *
 * Return: Nothing
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

/**
 * subtract - Subtracts the second integer from the first
 *
 * Return: Nothing
 */
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

/**
 * multiply - Multiplies two integers entered by the user
 *
 * Return: Nothing
 */
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

/**
 * divide - Divides the first integer by the second
 *
 * Return: Nothing
 */
void divide(void)
{
	int a;
	int b;
	int sum;

	printf("Enter value 1: \n");
	scanf("%d", &a);
	printf("Enter value 2: \n");
	scanf("%d", &b);

	if (b == 0)
	{
		printf("Error: division by zero\n");
	}
	else
	{
		sum = a / b;
		printf("%d divided by %d is %d\n", a, b, sum);
	}



}

/**
 * main - Displays the calculator menu and performs the selected operation
 *
 * Return: Always 0 (Success)
 */
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
	else if (choice == 2)
	{
		subtract();
	}
	else if (choice == 3)
	{
		multiply();
	}
	else if (choice == 4)
	{
		divide();
	}
	else
	{
		printf("Goodbye!\n");
	}
	return (0);
}
