#include<stdio.h>
#include<stdlib.h>
#include"Information.h"

int main(void)
{
	Person P;
	printf("Please input your name:");
	scanf_s("%s", &P.name,8);
	printf("Please input your gender (0 for woman,1 for man):");
	scanf_s("%d", &P.gender,8);
	printf("Please input your age:");
	scanf_s("%d", &P.age,9);

	printf("\nHi! %s.", P.name);
	if (P.gender == 0) printf("You are a %d-year-old woman.",P.age);
	else printf("You are a %d-year-old man.", P.age);
	system("pause");
	return 0;

}