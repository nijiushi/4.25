/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int find(int n1, int n2)
{
	int i = 0;
	int num = 0;
	num = n1 < n2 ? n1 : n2;
	for (i = num; i >= 1; i--)
	{
		if (n1%i == 0 && n2%i == 0)
		{
			return i;
		}
	}
}
int main()
{
	find(25, 35);
	printf("%d", find(25, 35));
	system("pause");
	return 0;
}*/
#define _CRT_SECURE_NO_WARNINGS//µ›πÈ–¥∑®
#include<stdio.h>
#include<stdlib.h>
int temp = 0;
int find(int n1, int n2)
{
	temp = n1%n2;
	if (temp == 0)
	{
		return n2;
	}
	else{
		find(n2, temp);
	}
}
int main()
{
	find(25, 35);
	printf("%d", find(25, 35));
	system("pause");
	return 0;
}
