#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*int main(int argc, char *argv[]) {
	if(1
	{
		printf("True\t��\n");
		printf("��\t�¾�\n");
	}
	else
	{
		printf("False\t��\n");
		printf("�ƴ�\t�ƴϾ�\n");
	}
	)
	return 0;
}*/
/*void main() {
	int a, b;
	
	a=12;
	b=56;
	
	if(a>b)
	{
		printf("%d�� %d���� ũ��\n", a, b);
	}
	else
	{
		printf("%d�� %d���� ũ�� �ʴ�\n"a, b);
	}
}*/
/*void main() {
	int a, b, c;
	
	a=12;
	b=56;
	c=a>b;
	
	if(1)
	{
		printf("%d�� %d���� ũ��\n", a, b);
	}
	else
	{
		printf("%d�� %d���� ũ�� �ʴ�\n", a, b);
	}
}*/
/*void main() 
{
	srand(time(NULL));
	
	int rnd = rand() % 1024;
	
	printf("%d\n\n", rnd);
	
	if (rnd>500)
	{
		printf("���ǽ�1 ����\n");
	}
	
	if (rnd>750)
	{
		printf("���ǽ�2 ����\n");
	}
	if (rnd>900)
	{
		printf("���ǽ�3 ����\n");
	}
	if (rnd>1000)
	{
		printf("���ǽ�4 ����\n");
	}
}*/
/*void main()
{
	int num;
	
	printf("10000 �̸� ���� �Է�:");
	scanf("%d", &num);
	
	if(num<10)
	{
		printf("�� �ڸ� ��\n");
	}
	else if(num<100)
	{
		printf("�� �ڸ� ��\n");
	}
	else if(num<1000)
	{
		printf("�� �ڸ� ��\n");
	}
	else if(num<10000)
	{
		printf("�� �ڸ� ��\n");
	}
}*/
/*void main()
{
	int a, b;
	double s, a1, a2, a3, a4, a5;
	
	printf("1��\n\n����:");
	scanf("%d", &a);
	printf("\n\n");
	if(a<0)
	{
		printf("1) ����");
	}
	else if(a>0)
	{
		printf("1) ���");
	}
	else
	{
		printf("1) 0");
	}
	printf("\n\n");
	if(a%2==0)
	{
		printf("2) ¦��");
	}
	else
	{
		printf("2) Ȧ��");
	}
	printf("\n\n");
	if (a%3==0)
	{
		printf("3) O");
	} 
	else 
	{
		printf("3) X");
	} 
	printf("\n\n4)���� �ΰ�:");
	scanf("%d, %d", &a, &b);
	printf("\n\n");
	
	if (a>b)
	{
		if (a%b==0)
		{
			printf("����");
		}
		else
		{
			printf("�Ұ���");
		}
	}
	else
	{
		if (b%a==0)
		{
			printf("����");
		}
		else
		{
			printf("�Ұ���");
		}
	}
	printf("\n\n5)�Ǽ�:");
	scanf("%lf", &s);
	printf("\n\n");
	
	if(s>0)
	{
		printf("%.1lf", s);
	}
	else
	{
		printf("%.1lf", -1*s);
	}
	
	printf("\n\n6)�Ǽ�5��:");
	scanf("%lf, %lf, %lf, %lf, %lf", &a1, &a2, &a3, &a4, &a5);
	printf("\n\n");
	
	if(a1<a2)
	{
		a1=a2;
	}
	if(a1<a2)
	{
		a1=a2;
	}
	if(a1<a3)
	{
		a1=a3;
	}
	if(a1<a4)
	{
		a1=a4;
	}
	if(a1<a5)
	{
		a1=a5;
	}
	printf("%lf", a1);
}*/
void main()
{
	int a;
	scanf("%d", &a);
	
	if (a==2)
	{
		printf("������ī");
	}
	else if (a==5)
	{
		printf("�¿���");
	}
	else if (a==7)
	{
		printf("SUV");
	}
	else if (a==9)
	{
		printf("������");
	}
	else if (a==12)
	{
		printf("�̴Ϲ���");
	}
	else 
	{
		printf("�Է¿���");
	} 
}
