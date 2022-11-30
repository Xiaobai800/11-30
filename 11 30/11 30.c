#include<stdio.h>
//void transform(int arr[3][3])
//{
//	int i = 0;
//	int j = 0;
//	int temp = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j=i; j < 3; j++)
//		{
//			temp = arr[i][j];
//			arr[i][j] = arr[j][i];
//			arr[j][i] = temp;
//		}
//	}
//	printf("转置后：\n");
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%3d", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int arr[3][3] = { {1,2,3},
//		              {4,5,6},
//	                  {7,8,9} };
//	printf("转置前：\n");
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%3d", arr[i][j]);
//		}
//		printf("\n");
//	}
//	transform(arr);
//	return 0;
//}


//#include <stdio.h>
//#define N 3
//#define M 4
//float a[N][M];
////成绩录入函数 
//void sr()
//{
//	int i, j;
//	for (i = 0; i < N; i++)
//	{
//		printf("请输入第%d个学生的四门成绩：", i + 1);
//		for (j = 0; j < M; j++)
//		{
//			scanf_s("%f", &a[i][j]);
//		}
//	}
//}
////学生平均分计算函数 
//void p1()
//{
//	int i, j;
//	float sum;
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0, sum = 0; j < M; j++)
//		{
//			sum += a[i][j];
//		}
//		printf("第%d个学生平均分为%.2f", i + 1, sum / M);
//		printf("\n");
//	}
//}
////每门课平均分计算函数 
//void p2()
//{
//	int i, j;
//	float sum = 0;
//	for (j = 0; j < M; j++)
//	{
//		for (i = 0; i < N; i++)
//		{
//			sum += a[i][j];
//		}
//		printf("第%d门课平均分为%.2f", j + 1, sum / N);
//		printf("\n");
//		sum = 0;
//	}
//}
////找出所有12个分数中最高的分数所对应的学生和课程函数
//void zgf()
//{
//	int i, j;
//	float max = 0;
//	int xs, kc;
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j < M; j++)
//		{
//			if (max < a[i][j])
//			{
//				max = a[i][j];
//				xs = i;
//				kc = j;
//			}
//		}
//	}
//	printf("最高分是第%d个学生的成绩的第%d门课成绩。", xs + 1, kc + 1);
//}
//
//int main(void) 
//{
//	
//	sr( );   //调用函数sr
//	p1( );   //调用函数p1
//	p2( );   //调用函数p2
//	zgf( );   //调用函数zgf
//	return 0;
//}

//#include<stdio.h>
//int jc(int n)
//{
//	return (n == 1) ? 1 : jc(n - 1) * n;
//}
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	printf("请输入一个大于0的数字:");
//	scanf_s("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		j += jc(i);
//	}
//	printf("%d的阶乘和为:%d", n, j);
//
//}
