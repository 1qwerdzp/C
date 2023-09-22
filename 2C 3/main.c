#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*int main(int argc, char *argv[]) {
	char c='A';
	
	char *p;
	p=&c;
	
	printf("%p\n", p);
	
	printf("%c\n", *p);
	return 0;
}*/
/*void add(int n1, int n2);

void main(){
	int n1=5;
	int n2=10;
	
	add(n1, n2);
	
	printf("number1=%d\n", n1);
	printf("number2=%d\n", n2);
}

void add(int n1, int n2){
	n1=n1+10;
	n2=n2+10;
}*/
/*void add(int *n1, int *n2);

void main(){
	int n1=5;
	int n2=10;
	
	add(&n1, &n2);
	
	printf("number1=%d\n", n1);
	printf("number2=%d\n", n2);
}

void add(int *n1, int *n2){
	*n1=*n1+10;
	*n2=*n2+10;
}*/
/*void add(int *n1, int *n2);

void main(){
	int a;	double b;	char c;
	int *pa;	double *pb;	char *pc;
	
	a=153;	b=12.7;	c='j';
	pa=&a; pb=&b; pc=&c;
	
	printf("pa=%x pd=%x pc=%x\n", pa, pb, pc);
	printf("pa=%x pd=%x pc=%x\n", &a, &b, &c);

	printf("pa=%x pd=%x pc=%x\n", a, b, c);
	printf("pa=%x pd=%x pc=%x\n", *pa, *pb, *pc);
	return 0;
}

void add(int *n1, int *n2){
	*n1=*n1+10;
	*n2=*n2+10;
}*/

/*void main(){
	int n;
	int *pn, *pr;
	int ar[10]={10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	
	n=49;
	pn=&n;
	pr=&ar[2];
	printf("%d %d %p %p\n", n, ar[2], pn, pr);
	
	*pn=59;
	*pr=33;
	printf("%d %d %d\n", *pn, *pr, n);
}*/
/*void main(){
	int a, b;
	int add, sub, n, d;
	int *pa, *pb;
	
	pa=&a;
	pb=&b;
	
	a=30;
	b=55;
	
	add=*pa+*pb;
	printf("add=%d\n", add);
	
	*pa=9;
	*pb=7;
	sub=*pa-*pb;
	printf("sub=%d\n", sub);
	*pa=12;
	b=3;
	n=*pa * *pb;
	printf("n=%d\n", n);
	
	a=45;
	*pb=5;
	d=*pa / *pb;
	printf("d=%d\n", d);
}*/
/*void main(){
	double f1, f2, f3;
	double *p1, *p2, *p3;
	
	p1=&f1;
	p2=&f2;
	p3=&f3;
	
	printf("실수입력:");
	scanf("%lf", &f1);
	printf("실수입력:");
	scanf("%lf", &f2);
	f3= *p1+*p2;
	printf("%lf + %lf - %lf\n", f1, f2, f3);
	
	printf("실수입력:");
	scanf("%lf", p1);
	printf("실수입력:");
	scanf("%lf", p2);
	*p3= f1-f2;
	printf("%lf - %lf = %lf\n", p1, p2, p3);
	
	printf("실수 2개 입력:");
	scanf("%lf %lf", p1, &f2);
	*p3=f1* *p2;
	printf("%lf*%lf-%lf\n", f1, *p2, f3);
}*/
/*void main(){
	char ch1, ch2;
	char *cp1, *cp2;
	
	cp1=&ch1;
	cp2=&ch2;
	printf("문자1 입력:");
	ch1=getchar();
	getchar();
	printf("문자2 입력:");
	scanf("%c", &ch2);
	getchar();
	printf("%c", *cp1);
	putchar(*cp2);
	
	gc(&ch1);
	pc(cp1);
}

void gc(char *cp){
	printf("\n문자3 입력");
	*cp=getchar();
	getchar();
}
void pc(char *cp){
	printf("%c", *cp);
}*/
void An(int, int);
void Sn(int*, int*);
void Mn(int*, int*);
void Dn(int, int);

void main(){
	int a, b;
	int *pa=&a, *pb=&b;
	
	printf("정수입력:");
	scanf("%d %d", &a, pb);
	
	An(a, b);
	Sn(&a, &b);
	Mn(pa, pb);
	Dn(*pa, *pb);
}

void An(int a, int b){
	printf("&d+%d=%d", a, b, a+b);
}
void Sn(int*a, int*b){
	
}
void Mn(int*pa, int*pb){
	
}
void Dn(int pa, int pb){
	
}
