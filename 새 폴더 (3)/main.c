#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*void main(int argc, char *argv[]) {
	int a;
	double f1;
	char ch;
	
	a=15;
	f1=123.456;
	ch='A';
	printf("%d\n", a);
	printf("%.3lf\n", f1);
	printf("%c\n", ch);
} */
/*
void main(){
	int num;
	
	printf("숫자를 하나 입력해주세요. :");
	scanf("%d", &num);
	printf("%d\n", num); 
} */
/*
void main(){
	double eye_r;
	double eye_l;
	
	printf("양쪽 시력을 입력해주세요. : ");
	scanf("%lf %lf", &eye_r, &eye_l);
	printf("오름쪽 시력: %.1lf\n왼쪽 시력: %.1lf\n", eye_r, eye_l); 
} */
void main(){
	/*int cy;
	int cr;
	int cn;
	
	printf("학년, 반, 번호 :");
	scanf("%d, %d, %d", &cy, &cr, &cn);
	printf("%d학년 %d반 %d번\n\n", cy, cr, cn);
	
	int ehd;
	int gh;
	
	printf("아파트 동, 호수 :");
	scanf("%d, %d", &ehd, &gh);
	printf("%d동 %d호\n\n", ehd, gh); 
	
	double zl;
	int an;
	char guf;
	
	printf("키, 몸무게, 혈액형 :");
	scanf("%lf, %d, %c", &zl, &an, &guf);
	printf("키:%.1lf \n몸무게:%d \n혈액형:%c\n\n", zl, an, guf); 
	*/
	
	double g;
	
	printf("g:");
	scanf("%lf", &g);
	printf("%.3lfg= %.3lfkg\n", g, g/1000);
	
	double m;
	
	printf("m:");
	scanf("%lf", &m);
	printf("%.2lfm=%.2lfcm=%.2lfmm", m, m*100, m*1000);
}
