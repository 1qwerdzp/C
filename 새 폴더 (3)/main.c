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
	
	printf("���ڸ� �ϳ� �Է����ּ���. :");
	scanf("%d", &num);
	printf("%d\n", num); 
} */
/*
void main(){
	double eye_r;
	double eye_l;
	
	printf("���� �÷��� �Է����ּ���. : ");
	scanf("%lf %lf", &eye_r, &eye_l);
	printf("������ �÷�: %.1lf\n���� �÷�: %.1lf\n", eye_r, eye_l); 
} */
void main(){
	/*int cy;
	int cr;
	int cn;
	
	printf("�г�, ��, ��ȣ :");
	scanf("%d, %d, %d", &cy, &cr, &cn);
	printf("%d�г� %d�� %d��\n\n", cy, cr, cn);
	
	int ehd;
	int gh;
	
	printf("����Ʈ ��, ȣ�� :");
	scanf("%d, %d", &ehd, &gh);
	printf("%d�� %dȣ\n\n", ehd, gh); 
	
	double zl;
	int an;
	char guf;
	
	printf("Ű, ������, ������ :");
	scanf("%lf, %d, %c", &zl, &an, &guf);
	printf("Ű:%.1lf \n������:%d \n������:%c\n\n", zl, an, guf); 
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
