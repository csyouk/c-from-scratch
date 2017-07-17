#include <stdio.h>

#define ENUM1 1

// 자동으로 EAST는 0, WEST는 1 ...
enum {EAST, WEST, SOUTH, NORTH} mark; 

#if ENUM1
void main(void){
	mark = EAST;
	if (mark == EAST) printf("mark is EAST\n");
}
#endif