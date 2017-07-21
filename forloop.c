#include <stdio.h>

void main(void)
{
	//for (int i = 'A'; i < 'K' + 1; i++)
	//{
	//	printf("%c ", i);
	//}
	//
	//printf("\n");
	//
	//for (int i = 'D'; i < 'X'+1; i += 2)
	//{
	//	printf("%c ", i);
	//}

	//printf("\n");

	//for (float f = 0.1; f < 3.14f; f += 0.1f)
	//{
	//	printf("%f\n", f);
	//}

	//printf("\n");

	//for (char c = 'A'; c < 'Z' + 1; c++)
	//{
	//	printf("%c ", c);
	//}

	//int condition_satisfied = 0;

	//for (int i = 1; i < 101; i++)
	//{
	//	if ((i % 3 != 0) && ( i % 10 != 3 ) && ( i / 10 != 3 ))
	//	{
	//		printf("[%03d] ", i);

	//		condition_satisfied++;
	//		
	//		if (condition_satisfied % 10 == 0){
	//			printf("\n");
	//		}

	//	}
	//}

	//int cnt = 0;
	//
	//for (int i = 1; i < 100; i++)
	//{
	//	if ((i % 3 == 0) || (i / 10 == 3) || (i % 10 == 3)) continue;
	//	else printf("%03d ", i);
	//	/*if (cnt % 10 == 0) printf("\n");*/
	//	cnt++;
	//	if (cnt % 10 == 0) printf("\n");
	//}	
	//printf("¼º°ø\n");
	//printf("# of integers : %d\n", cnt+1);

	for (int i = 1; i < 1000; i++)
	{
		(i % 2 == 0) ? printf("%03d", i) : printf("###");
		if (i % 10 == 0) printf("\n");
	}

}