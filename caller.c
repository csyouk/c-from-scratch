#include <stdio.h>
#include "body.h"

#define HEADER_TEST 1

#if HEADER_TEST
void main(void){
	int result;
	result = add(2, 3);
	printf("%d", result);
}
#endif