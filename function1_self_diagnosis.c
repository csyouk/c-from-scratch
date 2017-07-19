#include <stdio.h>

//void print_gugu(int s, int e);
//
//void main()
//{
//	int start, end;
//	scanf("%d%d", &start, &end);
//	print_gugu(start, end);
//}
//
//void print_gugu(int start, int end)
//{
//	int s, e;
//	if (start < end){
//		s = start;
//		e = end;
//	}
//	else {
//		s = end;
//		e = start;
//
//	}
//	for (int i = s; i < e + 1; i++)
//	{
//		printf("== %ddan ==\n", i);
//		for (int j = 1; j < 10; j++)
//		{
//			printf("%d * %d = %2d\n", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//
//void print_rep(int);
//void main()
//{
//	int iteration;
//	scanf("%d", &iteration);
//	print_rep(iteration);
//
//}
//
//void print_rep(int iter)
//{
//	for (int i = 0; i < iter; i++)
//	{
//		printf("~!@#$^&*()_+|\n");
//	}
//}



//
int round_f(float num);
void analyze(float values[3]);

void main(){
	float fvalues[3];
	scanf("%f %f %f", &fvalues[0], &fvalues[1], &fvalues[2]);


	analyze(fvalues);
}

void analyze(float values[3])
{

	float results[3] = { 0.0f, 0.0f, 0.0f }; // biggest, smallest, extra

	for (int i = 0; i < 3; i++)
	{
		for (int j = i; j < 3; j++)
		{
			if (values[i] > values[j])
			{
				results[j] = values[i];
				printf("if   | i is %d / j is %d / result %f --- value[i] %f, value[j] %f \n", i, j, results[i], values[i], values[j]);
			}
			else
			{
				results[j] = values[j];
				printf("else | i is %d / j is %d / result %f\n", i, j, results[i]);
			}
		}
	}
	for (int ii = 0; ii < 3; ii++)
	{
		printf("val : %f\n", results[ii]);
	}
	printf("%d %d %d", round_f(results[0]), round_f(results[1]), round_f(results[2]));
}

int round_f(float num)
{
	int result;

	if (num > 0.0f){
		result = num + 0.5f;
		return result;
	}
	result = num - 1.0f;
	return result;
}