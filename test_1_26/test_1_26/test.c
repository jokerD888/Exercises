#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//��������
/*int main(void)
{
	int n, x, y, temp;
	int i, j, flag;
	scanf("%d", &n);
	for (x = 12345; x <= 98765; x++)
	{
		int a[10] = { 0 };
		flag = 1;
		temp = x;//xֵ��ѭ�����أ����ܸı䣬��temp��ֵ�����λ

		if (x % n == 0)//ȷ����������¼y�ĸ���λ
		{
			y = x / n;
			for (i = 4; i >= 0; i--)
			{
				a[i] = y % 10;
				y /= 10;
			}
		}

		for (i = 9; i >= 5; i--)//��¼x����λ
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
					break;//ֻҪ�ҳ�������ͬ������
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
//��Ŀ����:
//����������k�������ļ�ĩβ�������ҵ����е�������x��y��x���ڵ���y����ʹ��1 / k = 1 / x + 1 / y��
//�����������
//��һ�������ѧ˼ά��1/a+1b=(a+b)/a*b,����1/k=1/a+1b,�ɼ���((float)x * y / (x + y))-a�Ƿ����������֤���
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
//�������˷��ٽϷ�һ�Ľ�����һforѭ����Ч�ʽϸߣ�
int main(void)
{
	int k, x, y;
	scanf("%d", &k);
	for (x = k + 1; x <= 2 * k; x++)
	{
		y = x * k / (x - k);//��y��hʱ����ΪС������ضϱ���Ϊ����������С�������޷���������if���
		if (k * (x + y) == x * y)
		{
			printf("1/%d = 1/%d + 1/%d\n", k, y, x);
		}
		
	}
	return 0;
}
//
