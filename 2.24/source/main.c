#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;
	int b;
	printf("Enter an integer:");
	scanf_s("%d", &a);
	b = a % 2;
	if (b == 1)
	{
		printf("This integer is odd\n");
	}
	if (b == 0)
	{
		printf("This integer is even\n");
	}
	system("pause");
	return 0;
}