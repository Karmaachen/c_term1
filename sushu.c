#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	for (int i = 2; i < 100; i++)
	if (sushu(i)) //if(prime(i)!=0�����ݺ������÷���ֵ��������Ӧ�ж� 
		printf("%6d", i);
}
int sushu(int n)
{
	if (n == 1)
		return 0;
	int i;
	int kaifang = (int)sqrt(n);
	for (i = 2; i <= kaifang; i++)
		if (n % i == 0)
		return 0;
	return 1;
}
//#include <stdio.h>
//#include <math.h>
//
////int prime(int n); //�����������ж�n���Ƿ�Ϊ���� 
//
//int main()
//{
//	for (int i = 2; i < 100; i++)
//		if (prime(i)) //if(prime(i)!=0�����ݺ������÷���ֵ��������Ӧ�ж� 
//			printf("%6d", i);
//
//	return 0;
//}
//
//// �ж������������Ƿ���1���񷵻�0 
//int prime(int n)
//{
//	if (n == 1) //1�������� 
//		return 0;
//
//	int temp = (int)sqrt(n);
//	for (int i = 2; i <= temp; i++)
//		if (n % i == 0)
//			return 0;
//
//	return 1; //n������ 
//}
