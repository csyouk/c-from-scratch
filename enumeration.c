#include <stdio.h>

#define ENUM1 1

// �ڵ����� EAST�� 0, WEST�� 1 ...
enum {EAST, WEST, SOUTH, NORTH} mark; 

#if ENUM1
void main(void){
	mark = EAST;
	if (mark == EAST) printf("mark is EAST\n");
}
#endif