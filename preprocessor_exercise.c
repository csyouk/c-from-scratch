#include <stdio.h>

#define PREPROCESSOR_TEST 1

#if PREPROCESSOR_TEST

#define  print_msg(a, b)  \
   printf("%s and %s \n", a, b)

#define  message(arg1, arg2)  \
   printf(#arg1 " and " #arg2 " // argument passed! \n")

#define tokenpaster(n) \
	printf ("token" #n " = %d", token##n)

int main(void) {
	message("csyouk", "tommey");

	int token34 = 40;
	tokenpaster(34);

	return 0;
}

#endif