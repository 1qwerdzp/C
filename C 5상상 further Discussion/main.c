#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b, c, d;
	
	a=100/5;
	b=80;
	printf("1) : %d\n\n", b-(3*a)>=15);
	
	a=1827;
	b=972;
	printf("2) : %d\n\n", a-2*888<b-888);
	
	a=250;
	b=200;
	printf("3) : %d\n\n", -1*((a+60!=b+100)-1));
	
	a=170;
	b=95;
	printf("4) : %d\n\n", 176>=a&&67<=b);
	
	a=8;
	b=8;
	printf("5) : %d\n\n", 10>=a&&10>=b);
	
	a=855+875+905+910;
	b=880;
	printf("6) : %d\n\n2 한글, 영어:", a/4>=b);
	
	a=180;
	b=150;
	scanf("%d, %d", &c, &d);
	printf("\n%d\n\n3 달리기(7.8초 이하), 매달리기(125.7초 초과), 발굽혀 펴기(45회 이상)):", c>=a&&d>=b);
	
	scanf("%d, %d, %d", &a, &b, &c);
	printf("\n%d\n\n4 창의성, 공익성, 협동성:", a<=7.8||b>125.7||c>=45);
	
	scanf("%d, %d, %d", &a, &b, &c);
	printf("\n%d\n\n", a>=80&&b>=80&&c>=80);
	
	printf("1 a:");
	scanf("%d", &a);
	
	printf("\n%d\n\n2 a:", a%8!=0&&a%4==0);
	scanf("%d", &a);
	
	printf("\n%d\n\n3 a:", a%2==1&&a%5==3);
	scanf("%d", &a);
	
	printf("\n%d\n\n4 a, b, c:", a%5==0||a%7==0);
	scanf("%d, %d, %d", &a, &b, &c);
	
	printf("\n%d\n\n5 a, b, c:", a*a+b*b!=c*c);
	scanf("%d, %d, %d", &a, &b, &c);
	
	printf("\n%d\n\n6 a, b, c:", a%b==0&&a%c!=0);
	scanf("%d, %d, %d", &a, &b, &c);
	
	printf("\n%d\n\n7 a, b, c:", a>b+c&&a<b*c);
	scanf("%d, %d, %d", &a, &b, &c);
	
	printf("\n%d\n\n\n\n\n\n\n\n──THE END──", a<b*c||a>b*b);
	return 0;
}
