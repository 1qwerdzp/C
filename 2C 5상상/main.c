#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void ID(int *p);
void PA(int ar[]);
int GX(int *ar);
int GN(int *ar);
int main(){
	srand((unsigned)time(NULL));
	
	int ar[10]={0};
	int max, min;
	
	ID(ar);
	PA(ar);
	max=GX(ar);
	min=GN(ar);
	return 0;
}

void ID(int *p){
	for(int i=0; i<10; i++){
		*(p+i)=rand()%100;
	}
}

void PA(int ar[]){
	for(int i=0; i<10; i++){
		printf("%2d", ar[i]);
	}
	printf("\n");
}

int GX(int *ar){
	int a=0;
	for(int i=0; i<10; i++){
		if(*ar>a){
			a=*ar;
		}
	}
	return a;
}

int GN(int *ar){
	
}

