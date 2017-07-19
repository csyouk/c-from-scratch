#include <stdio.h>

#define FUNCTION_CLASS 0
//If prototype is not defined, compiler send warning.
//void name_disp(void);

// belows three prototypes acts same behavior.
int my_age(int);
//int my_age(int a);
//int my_age(int my_age);

#if FUNCTION_CLASS
void main(void){
	name_disp();
}

void name_disp(void){
	printf("name defined");
}

int my_age(int age){
	return age;
}
#endif