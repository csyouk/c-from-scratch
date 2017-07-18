#define HEADER_TEST 1

#include <stdio.h>
#include "body.h"



#if HEADER_TEST
void main(void){
	int result;
	result = add(2, 3);
	printf("%d\n", result);

	printf("%d\n", HHEADER_TEST)
}
#endif