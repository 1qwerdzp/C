#include <stdio.h>
#include <stdlib.h>

/*int main(int argc, char *argv[]) {
	int i, n, x, a;
	scanf("%d", &n);
	for (i=1; i<=n; i++){
		printf("%d:", i);
		for (a=1; a<=i; a++){
			if (i%a==0){
				printf(" %d", a);
			}
		}
		printf("\n");
	}
	return 0;
}*/
/*void main(){
	int i, x, y, n;
	for (x=1; x<=4; x++){
		for(y=5-x; y>=1; y--){
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
	for (x=5; x>=1; x--){
		for(y=5; y>x; y--){
			printf("  ");
		}
		for (y=1; y<=x; y++){
			printf("%2d", y);
		}
		for (y=x-1; y>=1; y--){
			printf("%2d", y);
		}
		printf("\n");
	}
}*/
void main(){
	int i, n;
	for(i=1; i<10; i++){
		for(n=0; n<10; n++){
			printf("%d%d%d%d\n", i, n, n, i);
		}
	}
}
