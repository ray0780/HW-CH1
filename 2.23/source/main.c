#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n1;
	int n2;
	int n3;
	printf("Enter three integres:");
	scanf_s("%d%d%d", &n1, &n2, &n3);
	if (n2 > n3)
	{
		if (n1 < n2)
		{
			if (n1 < n3)
			{
				printf("the largest integr:%d\n", n2);
				printf("the smallest integr:%d\n", n1);
			}
			else //n1>n3
			{
				printf("the largest integr:%d\n", n2);
				printf("the smallest integr:%d\n", n3);
			}
		}
		else //n1>n2
		{
			printf("the largest integr:%d\n", n1);
			printf("the smallest integr:%d\n", n3);
		}
	}
	else //n3>n2
	{
		if (n2 < n1)
		{
			if (n1 < n3)
			{
				printf("the largest integr:%d\n", n3);
				printf("the smallest integr:%d\n", n2);
			}
			else // n3<n1
			{
				printf("the largest integr:%d\n", n1);
				printf("the smallest integr:%d\n", n2);
			}
		}
		else //n2>n1
		{
			printf("the largest integr:%d\n", n3);
			printf("the smallest integr:%d\n", n1);
		}
	}
	system("pause");
	return 0;
}