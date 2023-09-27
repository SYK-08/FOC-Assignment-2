#include <stdio.h>

int main()
{
	int age;
	printf("Enter the age:\n");
	scanf("%d", &age);

	if(age>18){
		printf("Eligible for voting.\n");
	}
	else if(age<=0){
		printf("Invalid input.\n");
	}
	else{
		printf("Not eligible for voting.\n");
	}
	return 0;
}