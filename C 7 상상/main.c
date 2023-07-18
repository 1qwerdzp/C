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
		printf("42페이지 입니다.")
		
		printf("\n1) 정수입력:");
		scanf("%d", &a);
		printf("\n\t[%d]는 2와 3의 공배수가 ", a);
		if (a%2+a%3==0)
			printf("맞습");
		else 
			printf("아닙");
		printf("니다.\n\n2)\n\t[%d]는 12와 30의 공약수가 ", a);
		if (12%a+30%a==0)
			printf("맞습");
		else 
			printf("아닙");
		printf("니다.\n\n3) 3개의 정수입력:");
		scanf("%d, %d, %d", &a, &b, &c);
		printf("\n\t[%d], [%d], [%d]중 가장 큰 수는", a, b, c);
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
		printf("[%d]이고,\n\t가장 작은 수는 [%d]입니다.", d, e);
		printf("\n\n4) 실수 입력:");
		scanf("%lf", &a1); 
		printf("\n\t%lf를 반올림한 정수는 [", a1);
		printf("%.0lf] 입니다.\n\n5) 3개의 실수입력:", a1);
		scanf("%lf, %lf, %lf", &a1, &b1, &c1);
		d3=(a1>b1&&a1>c1)*a1+(b1>a1&&b1>c1)*b1+(c1>a1&&c1>b1)*c1;
		d1=(a1>c1&&a1>c1)*c1+(b1<a1&&b1<c1)*b1+(c1>a1&&b1>a1)*a1;
		d2=a1+b1+c1-d1-d3;
		printf("\n\t%lf, %lf, %lf", d1, d2, d3);
	}
	else if (z==2)
	{
		printf("45페이지 입니다.\n4)정수 입력:"); 
		scanf("%d, %d"); 
	}
	return 0;
}
