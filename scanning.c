#include <stdio.h>

// #pragma warning(disable:4996) //suppress warnings.

#define EX18 1
#define EX19 0

void main(void){
#if EX18
	int i;
	printf("Input : ");
	scanf("%d", &i);
	printf("Your choice is %d \n", i);
#endif

#if EX19

#endif
}
