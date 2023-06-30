#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*int main(int argc, char *argv[]) {
	int a, b;
	
	a=23;
	b=24;
	printf("%d\n", a>b);
	printf("%d\n", a<b);
	return 0;
}*/

/*int main(){
	printf("%d\n", 10>5&&8<3);
	printf("%d\n", 10>5||8<3);
	printf("%d\n", !(10>8));	
}*/

/*int main(){
	int r;
	
	r=0&&0;
	printf("%d\n", r);
	r=0&&1;
	printf("%d\n", r);
	r=1&&0;
	printf("%d\n", r);
	r=1&&1;
	printf("%d\n", r);
	
	r=0||0;
	printf("%d\n", r);
	r=0||1;
	printf("%d\n", r);
	r=1||0;
	printf("%d\n", r);
	r=1||1;
	printf("%d\n", r);
	
	printf("%d\n", !r);
}*/

/*int main(){
	int a;
	scanf("%d", &a);
	printf("%d\n%d\n%d\n%d\n%d", a%7==5, a%3==0, a%5!= 0, a%3==0&&a%2==0, a%4==0||a%7==0);
	
	return 0;
}*/

/*int main(){
	int gkr=15;
	int tjs=2;
	printf("%d", gkr*1000<tjs*5000);
	int a=1;
	int b=3;
	printf("%d", a==b+100);
	int dus=500;
	int rhd=1000;
	printf("%d", 5000>=5*dus+2*rhd);
	int rP=2000;
	int to=3000;
	int dj=4000;
	int cka=5000;
	printf("%d", 15000>=cka&&15000>=2*cka&&0<=15000-2*cka-3*rP&&0<=15000-cka-5*rP);
	return 0;
}*/

int main(){
	int a, b;
	
	printf("문제 6\n");
	scanf("%d %d", &a, &b);
	printf("%d\n\n", a+b);
	
	printf("문제 7\n");
	printf("\"천재는 1%%의영감과 99%%의 노력으로 이루어진다\"\n\t-토머스 에디슨\n\n");
	
	printf("문제 8\n정수1:");
	scanf("%d", &a);
	printf("정수2:");
	scanf("%d", &b);
	printf("\n\n%d＋%d=%d\n%d－%d=%d\n%d×%d=%d\n%d÷%d=%d\n\n", a, b, a+b, a, b, a-b, a, b, a*b, a, b, a/b);
	
	printf("문제 9\n");
	printf("세자리 정수를 입력하세요:");
	scanf("%d", &a);
	float g, e, t;
	g=a*0.01;
	e=(a-g*100)*0.1;
	t=a-100*g-10*e;
	printf("\n\n%.0f+%.0f+%.0f=%.0f", g, e, t, g+e+t);

	return 0;
}
