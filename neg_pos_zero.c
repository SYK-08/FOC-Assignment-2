#include <stdio.h>

int main()
{
	int num;
	printf("Enter a number:\n");
	scanf("%d", &num);

	if(num>0){
		printf("%d is a positive number.\n", num);
	}
	if(num<0){
		printf("%d is a negative number.\n", num);
	}
	if(num==0){
		printf("%d is zero.\n", num);
	}
	return 0;
}