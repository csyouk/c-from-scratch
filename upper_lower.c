#include <stdio.h>

#define UPPWER_LOWER 1
#define CH2EX10 1
#define CONVERT_CONSTANT 32

char upper_char(char);
char lower_char(char);

#if UPPWER_LOWER
void main(void){

#if CH2EX10
	char u, l;
	l = upper_char('a');
	u = lower_char('A');
	printf("lower : %c / upper : %c", l, u);
#endif

}


char upper_char(char lower)
{
	return lower - CONVERT_CONSTANT;
}

char lower_char(char upper)
{
	return upper + CONVERT_CONSTANT;
}

#endif