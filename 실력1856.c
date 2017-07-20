#include <stdio.h>

void main(){


	int n, m;

	scanf("%d%d", &n, &m);
	
	
	//for (int k = 1; k < n * m + 1; k++)
	//{
	//	int quot = (k - 1) / m;
	//	int n = (k - 1) % m;
	//	if (quot % 2 == 0)
	//	{
	//		printf("%d ", k);
	//	}
	//	else
	//	{
	//		printf("%d ", k + m - (2 * n + 1));
	//	}
	//	if (k % m == 0){
	//		printf("\n");
	//	}
	//}


	for (int i = 0; i < n; i++)
	{
		int sign = i % 2;
		for (int j = 0; j < m; j++)
		{
			int k = m * i + (j + 1);
			int initial = (m * i + 1) + (m * i + 1 + m - 1);
			int number = sign * (-(sign) * k + initial) + ((sign + 1) % 2) * (k);
			printf("%d ", number);
		}
		printf("\n");
	}
}