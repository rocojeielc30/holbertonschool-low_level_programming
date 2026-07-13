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
		printf("You have chosen to add");
	}
	else if (choice == 2)
	{
		printf("You have chosen to subtract");
	}
	else if (choice == 3)
	{
		printf("You have chosen to multiply");
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
