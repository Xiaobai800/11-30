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
//	printf("ת�ú�\n");
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
//	printf("ת��ǰ��\n");
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
////�ɼ�¼�뺯�� 
//void sr()
//{
//	int i, j;
//	for (i = 0; i < N; i++)
//	{
//		printf("�������%d��ѧ�������ųɼ���", i + 1);
//		for (j = 0; j < M; j++)
//		{
//			scanf_s("%f", &a[i][j]);
//		}
//	}
//}
////ѧ��ƽ���ּ��㺯�� 
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
//		printf("��%d��ѧ��ƽ����Ϊ%.2f", i + 1, sum / M);
//		printf("\n");
//	}
//}
////ÿ�ſ�ƽ���ּ��㺯�� 
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
//		printf("��%d�ſ�ƽ����Ϊ%.2f", j + 1, sum / N);
//		printf("\n");
//		sum = 0;
//	}
//}
////�ҳ�����12����������ߵķ�������Ӧ��ѧ���Ϳγ̺���
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
//	printf("��߷��ǵ�%d��ѧ���ĳɼ��ĵ�%d�ſγɼ���", xs + 1, kc + 1);
//}
//
//int main(void) 
//{
//	
//	sr( );   //���ú���sr
//	p1( );   //���ú���p1
//	p2( );   //���ú���p2
//	zgf( );   //���ú���zgf
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
//	printf("������һ������0������:");
//	scanf_s("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		j += jc(i);
//	}
//	printf("%d�Ľ׳˺�Ϊ:%d", n, j);
//
//}
