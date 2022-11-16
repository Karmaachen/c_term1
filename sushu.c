#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	for (int i = 2; i < 100; i++)
	if (sushu(i)) //if(prime(i)!=0：根据函数调用返回值来做出相应判断 
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
////int prime(int n); //函数声明，判断n以是否为素数 
//
//int main()
//{
//	for (int i = 2; i < 100; i++)
//		if (prime(i)) //if(prime(i)!=0：根据函数调用返回值来做出相应判断 
//			printf("%6d", i);
//
//	return 0;
//}
//
//// 判断素数函数，是返回1，否返回0 
//int prime(int n)
//{
//	if (n == 1) //1不是素数 
//		return 0;
//
//	int temp = (int)sqrt(n);
//	for (int i = 2; i <= temp; i++)
//		if (n % i == 0)
//			return 0;
//
//	return 1; //n是素数 
//}
