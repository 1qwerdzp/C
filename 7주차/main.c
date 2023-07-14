#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*int main(int argc, char *argv[]) {
	if(1
	{
		printf("True\t참\n");
		printf("응\t맞아\n");
	}
	else
	{
		printf("False\t참\n");
		printf("아니\t아니야\n");
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
		printf("%d는 %d보다 크다\n", a, b);
	}
	else
	{
		printf("%d는 %d보다 크지 않다\n"a, b);
	}
}*/
/*void main() {
	int a, b, c;
	
	a=12;
	b=56;
	c=a>b;
	
	if(1)
	{
		printf("%d는 %d보다 크다\n", a, b);
	}
	else
	{
		printf("%d는 %d보다 크지 않다\n", a, b);
	}
}*/
/*void main() 
{
	srand(time(NULL));
	
	int rnd = rand() % 1024;
	
	printf("%d\n\n", rnd);
	
	if (rnd>500)
	{
		printf("조건식1 실행\n");
	}
	
	if (rnd>750)
	{
		printf("조건식2 실행\n");
	}
	if (rnd>900)
	{
		printf("조건식3 실행\n");
	}
	if (rnd>1000)
	{
		printf("조건식4 실행\n");
	}
}*/
/*void main()
{
	int num;
	
	printf("10000 미만 정수 입력:");
	scanf("%d", &num);
	
	if(num<10)
	{
		printf("한 자리 수\n");
	}
	else if(num<100)
	{
		printf("두 자리 수\n");
	}
	else if(num<1000)
	{
		printf("세 자리 수\n");
	}
	else if(num<10000)
	{
		printf("네 자리 수\n");
	}
}*/
/*void main()
{
	int a, b;
	double s, a1, a2, a3, a4, a5;
	
	printf("1번\n\n정수:");
	scanf("%d", &a);
	printf("\n\n");
	if(a<0)
	{
		printf("1) 음수");
	}
	else if(a>0)
	{
		printf("1) 양수");
	}
	else
	{
		printf("1) 0");
	}
	printf("\n\n");
	if(a%2==0)
	{
		printf("2) 짝수");
	}
	else
	{
		printf("2) 홀수");
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
	printf("\n\n4)정수 두개:");
	scanf("%d, %d", &a, &b);
	printf("\n\n");
	
	if (a>b)
	{
		if (a%b==0)
		{
			printf("가능");
		}
		else
		{
			printf("불가능");
		}
	}
	else
	{
		if (b%a==0)
		{
			printf("가능");
		}
		else
		{
			printf("불가능");
		}
	}
	printf("\n\n5)실수:");
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
	
	printf("\n\n6)실수5개:");
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
		printf("스포츠카");
	}
	else if (a==5)
	{
		printf("승용차");
	}
	else if (a==7)
	{
		printf("SUV");
	}
	else if (a==9)
	{
		printf("승합차");
	}
	else if (a==12)
	{
		printf("미니버스");
	}
	else 
	{
		printf("입력오류");
	} 
}
