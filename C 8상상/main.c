#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n=0, i, f;
	double n1, f1;
	printf("2.\n\t1) ");
	for (i=1; i<=23; i++){
		n+=i*i-2*i*i*(i%2==0);
	}
	printf("%d\n\n\t2) ", n);
	n=0;
	for (i=200; i>0; i-=2){
		n+=i+i-1-2*(i+i-1)*(i%4!=0);
	}
	printf("%d\n\n3. \n\t1) n=", n);
	scanf("%d", &i);
	f=i;
	for (i*=-1; i<=f; i++){
		printf("\nn=%d", i);
	}
	n=0;
	printf("\n\n\t2) ");
	for (f; f>=1; f--){
		n+=f;
	}
	printf("%d\n\n\t3) f=", n);
	scanf("%lf", &f1);
	for (n1=0; n1<=f1; n1+=0.3){
		printf("%lf<=%lf\n", n1, f1);
	}
	printf("\n\n4.\n\t구구단 입력:");
	scanf("%d", &i);
	for (n=9; n>1; n--){
		printf("\n\t%d×%d=%d", i, n, i*n);
	}
	f=0;
	printf("\n\n5.\n");
	for(n=1; n<=10000; n*=10){
		scanf("%d", &i);
		f+=i*n;
	}
	printf("%d\n\n1.\n\t1)", f);
	for (i=0; i<10; i++){
		printf(" %d", -2+4*(i%2!=0));
	}
	printf("\n\n\t2) ");
	for (i=0; i<10; i++){
		printf(" %d", i%3);
	}
	printf("\n\n\t3) ");
	for (i=0; i<10; i++){
		printf(" %d", 3-i%3);
	}
	printf("\n\n\t4) ");
	for (i=0; i<10; i++){
		printf("%d", i%5+1);
	}
	printf("\n\n\t5) ");
	for (i=0; i<10; i++){
		printf("%d", 5-i%5-(i-i%5)*(i>4));
	}
	printf("\n\n\t6) ");
	for (i=0; i<10; i++){
		printf("%d", i%5+1);
	}
	return 0;
}
