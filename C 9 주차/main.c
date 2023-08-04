#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*int main(int argc, char *argv[]) {
	int i=1;
	while(i<=10)
	{
		printf("%d", i);
		i++;
	}
	return 0;
}*/

/*int main(int argc, char *argv[]) {
	int n=10;
	while(n<=17)
	{
		printf("%d", n);
		n++;
	}
	printf("\nwhile문 종료 후 n의 값:%d\n\n", n);
	n=20;
	while(n>=15)
	{
		printf("%d", n);
		n--;
	}
	printf("\nwhile문 종료 후 n의 값:%d\n\n", n);
	return 0;
}*/
/*int main(int argc, char *argv[]) {
	int n=20;
	while(n<=15)
	{
		n--;
		printf("%d", n);
	}
	printf("\nwhile문 종료 후 n의 값:%d\n\n", n);
	return 0;
}*/
/*void main(){
	int i=11;
	while(i<=10){
		printf("%d", i);
		i++;
	}
	printf("\n\n");
	i=11;
	do{
		printf("%d", i);
		i++;
	}while(i<=10);
}*/
/*void main(){
	int i=0;
	
	while(i<10){
		printf("i의 값:%d\n", i);
		i++;
		if (i==5){
			break;
		}
	}
}*/
/*void main(){
	int i=0;
	
	while(i<10){
		if (i==5){
			i++;
			continue;
		}
		printf("i의 값:%d\n", i);
		i++;
	}
}*/
/*void main(){
	int t, i=1;
	scanf("%d", &n);
	printf("1.\n\t1) ");
	while(i<=t){
		printf("%d ", 1-2*(i%2==0));
		i++;
	}
	i=1;
	printf("\n\n\t2) ");
	while(i<=t){
		printf("%d  ", 1-(i%2==0));
		i++;
	}
	i=1;
	printf("\n\n\t3) ");
	while(i<=t){
		printf("%d ", i-2*i*(i%2==0));
		i++;
	}
	int d=0, o=1, n, m;
	printf("2.\n\t입력:");
	scanf("%d, %d", &n, &m);
	printf("\n\n\t[출력결과]\n\t");
	while(m>0){
		printf("%d", o);
		o++;
		if (o>n){
			printf("\n\t");
			o=1;
			m--;
		}
	}
}*/
/*void main(){
	int i=0, n, e=0;
	scanf("%d", &n);
	while(1){
		if (i>=n){
			break;
		}
		if (i>e){
			i=0;
			e++;
			printf("\n");
		}
		i++;
		printf("%d", i);
	}
}*/
void main(){
	int i, a, w=1;
	scanf("%d", &i);
	a=i;
	while (i>10){
		i/=10;
		w++;
	}
	printf("\n\n%d는%d 자리 수입니다.", a, w);
}
