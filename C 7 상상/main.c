#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b, c;
	int d;
	int e; 
	double a1, b1, c1, d1, d2, d3;
		
	int z;
	scanf("%d", &z);
	if (z==1)
	{
		printf("42������ �Դϴ�.")
		
		printf("\n1) �����Է�:");
		scanf("%d", &a);
		printf("\n\t[%d]�� 2�� 3�� ������� ", a);
		if (a%2+a%3==0)
			printf("�½�");
		else 
			printf("�ƴ�");
		printf("�ϴ�.\n\n2)\n\t[%d]�� 12�� 30�� ������� ", a);
		if (12%a+30%a==0)
			printf("�½�");
		else 
			printf("�ƴ�");
		printf("�ϴ�.\n\n3) 3���� �����Է�:");
		scanf("%d, %d, %d", &a, &b, &c);
		printf("\n\t[%d], [%d], [%d]�� ���� ū ����", a, b, c);
		if (a>b)
		{
			if (a>c)
				d=a;
			if (b>c)
				e=c;
			else
				e=b;
		}
		else if (b<c)
		{
			d=c;
			e=a;
		}
		else if (a>c)
		{
			d=b;
			e=c;
		}
		printf("[%d]�̰�,\n\t���� ���� ���� [%d]�Դϴ�.", d, e);
		printf("\n\n4) �Ǽ� �Է�:");
		scanf("%lf", &a1); 
		printf("\n\t%lf�� �ݿø��� ������ [", a1);
		printf("%.0lf] �Դϴ�.\n\n5) 3���� �Ǽ��Է�:", a1);
		scanf("%lf, %lf, %lf", &a1, &b1, &c1);
		d3=(a1>b1&&a1>c1)*a1+(b1>a1&&b1>c1)*b1+(c1>a1&&c1>b1)*c1;
		d1=(a1>c1&&a1>c1)*c1+(b1<a1&&b1<c1)*b1+(c1>a1&&b1>a1)*a1;
		d2=a1+b1+c1-d1-d3;
		printf("\n\t%lf, %lf, %lf", d1, d2, d3);
	}
	else if (z==2)
	{
		printf("45������ �Դϴ�.\n4)���� �Է�:"); 
		scanf("%d, %d"); 
	}
	return 0;
}
