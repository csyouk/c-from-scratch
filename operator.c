#include <stdio.h>

#define ENABLE 1
#define EX29 0
#define EX30 1
#define EX31 0
#define EX32 0

#if ENABLE
void main(void){
#if EX29
	int a = 0x12345678;
	unsigned char b;
	
	b = a;
	printf("a = %#.8x, b = %#.8x\n", a, b);
	
	a = b;
	printf("a = %#.8x, b = %#.8x\n", a, b);
#endif

#if EX30
	int a = 10; int b = 20; int c;
	c = + a - - b;
	printf("c = %d\n", c); // 30

	c = sizeof(a) + -b;
	printf("c = %d\n", c); // -16

	printf("%d \n", sizeof(&a));
	printf("%d \n", sizeof & a);
	printf("%#.p \n", &a);
#endif

#if EX31
	int a = 10;
	int b = 20;
	int c1, c2, c3, c4;

	c1 = a + b * 2; // 50
	c2 = a * b / 2 % 4; // 0
	c3 = -a * 2 + b / 4; // -15
	c4 = a * ((2 + -b) / 4); // -40

	printf("%d %d %d %d\n", c1, c2, c3, c4);

#endif

#if EX32
	int a = 20, b, c, d;
	a = b = c = d = 10;
	printf("%d %d %d %d\n", a, b, c, d);
#endif
}

#endif