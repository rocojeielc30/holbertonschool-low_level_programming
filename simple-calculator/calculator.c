#include <stdio.h>

int main (void)
{
	int choice; 

	do 
	{
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
	}
	while (choice > 4 || choice < 0);

	if (choice == 1)
	{
		int a;
		int b;
		int sum;

		printf("You have chosen to add!\n");

		printf("Please enter value 1: ");
		scanf("%d", &a);

		printf("Please enter value 2: ");
		scanf("%d", &b);

		sum = a + b;
		printf("%d + %d equals %d.\n", a, b, sum);
	}
	else if (choice == 2)
	{
		int a;
		int b;
		int sum;

		printf("You have chosen to subtract!\n");

		printf("Please enter value 1: ");
		scanf("%d", &a);

		printf("Please enter value 2: ");
		scanf("%d", &b);

		sum = a - b;
		printf("%d - %d equals %d.\n", a, b, sum);
	}
	else if (choice == 3)
	{
		int a;
		int b;
		int sum;

		printf("You have chosen to multiply");

		printf("Please enter value 1: ");
		scanf("%d", &a);

		printf("Please enter value 2: ");
		scanf("%d", &b);

		sum = a * b;
		printf("%d times %d equals %d.\n", a, b, sum);
	}
	else if (choice == 4)
	{
		printf("You have chosen to Divide");
	}
	else {
		printf("Bye");
	}
	return (0);
}
