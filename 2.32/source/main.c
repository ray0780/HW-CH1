#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float w;
	float h;
	float bmi;
	printf("Enter your weight(Kilogram):");
	scanf_s("%f", &w);
	printf("Enter your height(Meter):");
	scanf_s("%f", &h);
	bmi = w / (h*h);
	printf("Your BMI:%0.2f\n", bmi);
	printf("\n");
	printf("\n");
	printf("BMI VALUES\n");
	printf("Underweight: less than 18.5\n");
	printf("Normal:      between 18.5 and 24.9\n");
	printf("Overweight:  between 25 and 29.9\n");
	printf("Obese:       30 or greater\n");
	system("pause");
	return 0;
}