#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*int main(int argc, char *argv[]) {
	int n, x, y;
	for(n=1; n<=7; n++){
		printf("\n%d학년\t", n);
		for(x=1; x<=7; x++){
			printf("%d반 ", x);
		} 
	}
	return 0;
}*/
/*void main(){
	int n=7, x;
	while(n>=1){
		printf("\n%d학년\t", n);
		n--;
		x=1;
		while(x<=7){
			printf("%d반 ", x);
			x++;
		}
	}
}*/
/*void main(){
	int x, n=1;
	do{
		printf("\n%d학년\t", n++);
		x=1;
		do{
			printf("%d반 ", x++);
		}while(x<=7);
	}while(n<7);
}*/
/*void main(){
	int x, y;
	for (x=1; x<=5; x++){
		for (y=1; y<=x; y++){
			printf("%2d", y);
		}
		printf("\n");
	}
	printf("\n");
	for (x=5; x>=1; x--){
		for (y=1; y<=x; y++){
			printf("%2d", y);
		}
		printf("\n");
	}
	printf("\n");
	for (x=5; x>=1; x--){
		for (y=x; y<=5; y++){
			printf("%2d", y);
		}
		printf("\n");
	}
	printf("\n");
	for (x=5; x>=1; x--){
		for (y=x; y>=1; y--){
			printf("%2d", y);
		}
		printf("\n");
	}
}*/
/*void main(){
	int i, x, y, n, n1;
	scanf("%d", &i);
	for(x=1; x<=i; x++){
		n=0;
		for (y=1; y<=x; y++){
			n+=y;
			printf("%d", y);
			n1+=y;
			if (y<x){
				printf("+");
			}
		}
		printf("=%d\n", n);
	}
	printf("\n%d", n1);
}*/
/*void main(){
	int i, x, y, n, n1;
	scanf("%d", &i);
	for(x=1; x<=i; x++){
		n=0;
		printf("%d:", x);
		for (y=1; y<=x; y++){
			if (x%y==0){
				printf("%d ", y);
			}
		}
		printf("\n");
	}
}*/
/*void main(){
	int i, x, y, n;
	scanf("%d", &i);
	for (x=1; x<=i; x++){
		for(y=i-x; y>=1; y--){
			printf("  ");
		}
		for(y=x; y>=1; y--){
			printf("%2d", y);
		}
		printf("\n");
	}
}*/
/*void main(){
	int i, x, y, n;
	scanf("%d", &i);
	for (x=1; x<=i; x++){
		for(y=i-x; y>=1; y--){
			printf("  ");
		}
		for(y=1; y<x; y++){
			printf("%2d", y);
		}
		for(y=x; y>=1; y--){
			printf("%2d", y);
		}
		printf("\n");
	}
}*/
/*void main(){
	int i, x, y, n;
	scanf("%d", &i);
	for (x=1; x<=i; x++){
		for(y=i-x; y>=1; y--){
			printf("  ");
		}
		for(y=i+1-x; y<=i; y++){
			printf("%2d", y);
		}
		printf("\n");
	}
}*/
/*void main(){
	int i, x, y, n;
	scanf("%d", &i);
	for (x=1; x<=i; x++){
		for(y=1; y<x; y++){
			printf("  ");
		}
		for(y=i-x+1; y>=1; y--){
			printf("%2d", y);
		}
		for(y=2; y<=i-x+1; y++){
			printf("%2d", y);
		}
		printf("\n");
	}
}*/
/*void main(){
	int n, i, f=0;
	for (n=101; n<1000; n+=2){
		for (i=2; i<n; i++){
			if (n%i==0){
				f=1;
				break;
			}
		}
		if (f==0){
			printf("%d\n", n);
		}
		f=0;
	}
}*/
