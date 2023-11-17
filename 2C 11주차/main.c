#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*int main(int argc, char *argv[]) {
	int*p;
	
	p=(int*)malloc(sizeof(int)*5);
	
	for(int i=0; i<5; i++){
		p[i]=i;
		printf("%d", p[i]);
	}
	printf("\n");
	
	for(int i=0; i<5; i++){
		printf("%d", *p+i);
	}
	return 0;
}*/
/*void main(){
	int ar[10]={1,2,3,4,5,6,7,8,9,10};
	int i;
	int *pr;
	
	printf("%d %d %d\n", sizeof(ar), sizeof(ar[0]), sizeof(int));
	
	for(i=0; i<sizeof(ar)/sizeof(ar[0]); i++){
		printf("%d ", ar[i]);
	}
	
	pr=(int*)malloc(sizeof(int)*20);
	printf("\n");
	for(i=0; i<20; i++){
		pr[i]=i+1;
		printf("%d ", pr[i]);
	}
}*/
void main(){
	int n;
	int *eh;
	scanf("%d", &n);
	eh=(int*)malloc(sizeof(int)*n);
	for(int i=0; i<n; i++){
		eh[i]=rand()%100;
		printf("%d ", eh[i]);
	}
}
