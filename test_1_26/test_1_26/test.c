#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//除法问题
/*int main(void)
{
	int n, x, y, temp;
	int i, j, flag;
	scanf("%d", &n);
	for (x = 12345; x <= 98765; x++)
	{
		int a[10] = { 0 };
		flag = 1;
		temp = x;//x值是循环因素，不能改变，用temp赋值求各个位

		if (x % n == 0)//确保整除，记录y的各个位
		{
			y = x / n;
			for (i = 4; i >= 0; i--)
			{
				a[i] = y % 10;
				y /= 10;
			}
		}

		for (i = 9; i >= 5; i--)//记录x各个位
		{
			a[i] = temp % 10;
			temp /= 10;
		}

		for (i = 0; i < 9; i++)
		{
			for (j = i + 1; j <= 9; j++)
			{
				if (a[i] == a[j])
				{
					flag = 0;
					break;//只要找出两个相同即跳出
				}
			}
			if (flag == 0) break;

		}

		if (flag == 1)
		{
		
			for (i = 5; i <= 9; i++)
			{
				printf("%d", a[i]);
			}
			printf(" / ");
			for (i = 0; i < 5; i++)
			{
				printf("%d", a[i]);
			}
			printf(" = %d\n", n);

		}

	}
	return 0;
}*/
//题目描述:
//输入正整数k，遇到文件末尾结束。找到所有的正整数x和y（x大于等于y），使得1 / k = 1 / x + 1 / y。
//分数拆分问题
//法一：结合数学思维，1/a+1b=(a+b)/a*b,若求1/k=1/a+1b,可计算((float)x * y / (x + y))-a是否等于零来验证结果
/*int main(void)
{
	int a, b, x, y, i, j;
	int k[100], p[100];
	float m, n, Q, T;
	scanf("%d", &a);
	for (x = a + 1; x <= 2*a; x++)
	{
		for (y = x; y < 1000; y++)
		{
			if (((float)x * y / (x + y))-a==0)
			{
				printf("1/%d = 1/%d + 1/%d\n", a, y, x);
			}
		}
	}
	return 0;
}*/
//法二：此法少较法一改进，少一for循环，效率较高，
int main(void)
{
	int k, x, y;
	scanf("%d", &k);
	for (x = k + 1; x <= 2 * k; x++)
	{
		y = x * k / (x - k);//若y此h时除得为小数，则截断保留为整数，若是小数，则无法进入下面if语句
		if (k * (x + y) == x * y)
		{
			printf("1/%d = 1/%d + 1/%d\n", k, y, x);
		}
		
	}
	return 0;
}
//
