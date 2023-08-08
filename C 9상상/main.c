#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, i=0, a, b=1, d=1;
	scanf("%d", &n);
	a=n; 
	while (n>=1){
		n/=10;
		i++;
	}
	printf("\n\n%d는 %d자리 수 입니다.\n\n", a, i);
	scanf("%d", &n);
	a=n; 
	//char q ='1';
	//int z = a-'0';
	while (n>=10){
		n/=10;
		d*=10;
	}
	i=1;
	n=0;
	while (i!=d*10){
		i*=10;
		a%=i;
		n+=a;
		b+=10;
		printf("a=%d, i=%d, n=%d, d=%d, b=%d\n\n", a, i, n, d, b);
	}
	printf("a=%d, i=%d, n=%d, d=%d, b=%d\n\n", a, i, n, d, b);
	/*printf("\n\n%d는 %d자리 수 입니다.", a, i);
	scanf("%d", &n);
	a=n; 
	while (n>=1){
		n/=10;
		i++;
	}
	printf("\n\n%d는 %d자리 수 입니다.", a, i);
	scanf("%d", &n);
	a=n; 
	while (n>=1){
		n/=10;
		i++;
	}
	printf("\n\n%d는 %d자리 수 입니다.", a, i);
	scanf("%d", &n);
	a=n; 
	while (n>=1){
		n/=10;
		i++;
	}
	printf("\n\n%d는 %d자리 수 입니다.", a, i);
	scanf("%d", &n);
	a=n; 
	while (n>=1){
		n/=10;
		i++;
	}
	printf("\n\n%d는 %d자리 수 입니다.", a, i);
	*/
	return 0;
}
