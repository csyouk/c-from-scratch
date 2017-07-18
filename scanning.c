// #pragma warning(disable:4996) //suppress warnings.
// #define _CRT_SECURE_NO_WARNINGS // suppress warnings.

#include <stdio.h>

#define EX18 0
#define EX19 0
#define EX20 0
#define EX20m1 0
#define EX21 1


void main(void){
#if EX18
	int i;
	printf("Input : ");
	scanf("%d", &i);
	printf("Your choice is %d \n", i);
#endif

#if EX19
	int i, j, k;
	printf("input i,j,k : ");
	scanf("%d%d%d", &i, &j, &k); 
	// if input values are larger than the scanf container 
	// than extra things are discarded.
	printf("your choice is: %d %d %d \n", i, j, k);
#endif

#if EX20
	char a, b,c;
	printf("input : ");
	scanf("%c %c", &a, &b);
	printf("last : ");
	scanf("\n%c", &c);
	printf("your choice is : %c %c \n", a, b);
	printf("last : %c \n", c);
#endif

#if EX20m1
	char hello[11];

	for (int i = 0; i < 10; i++)
	{
		scanf("%c", &hello[i]);
	}
	
	for (int i = 0; i < 10; i++)
	{
		printf("%c", hello[i]);
	}
#endif

#if EX21
	char a, b, c;
	printf("input : ");
	scanf("%c %c", &a, &b);
	fflush(stdin);
	scanf("%c", &c);
	printf("your choice is : %c%c%c", a, b, c);
#endif
}
