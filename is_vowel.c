#include <stdio.h>

int main()
{
	char alpha;
	printf("Enter an alphabet: ");
	scanf("%c", &alpha);

	if(alpha == 'a' || alpha == 'e' || alpha == 'i' || alpha == 'o' || alpha == 'u'){
		printf("It is a vowel\n");
	}
	else{
		printf("It is not a vowel\n");
	}
	return 0;
}