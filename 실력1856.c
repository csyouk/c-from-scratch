//#include <stdio.h>
//
//void main(){
//
//
//	int n, m;
//
//	scanf("%d%d", &n, &m);
//	
//	
//	//for (int k = 1; k < n * m + 1; k++)
//	//{
//	//	int quot = (k - 1) / m;
//	//	int n = (k - 1) % m;
//	//	if (quot % 2 == 0)
//	//	{
//	//		printf("%d ", k);
//	//	}
//	//	else
//	//	{
//	//		printf("%d ", k + m - (2 * n + 1));
//	//	}
//	//	if (k % m == 0){
//	//		printf("\n");
//	//	}
//	//}
//
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			printf("%d ", m * i + (j + 1));
//		}
//		printf("\n");
//	}
//}