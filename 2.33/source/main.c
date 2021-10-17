#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float mile , cost, milegas , park, toll;
	float money;
	printf("Enter total miles driven per day:");
	scanf_s("%f", &mile);
	printf("Enter cost per liter of gasoline:");
	scanf_s("%f", &cost);
	printf("Enter average miles per liter:");
	scanf_s("%f", &milegas);
	printf("Enter parking feesper day:");
	scanf_s("%f", &park);
	printf("Enter tolls per day:");
	scanf_s("%f", &toll);
	money = mile / milegas * cost;
	printf("The user's cost per day of driving to work:%0.3f\n", money + park + toll);
	system("pause");
	return 0;
}