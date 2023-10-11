#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*void ID(int *p);
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
	printf("\nbast=>%d\nlowest=>%d", max, min);
	return 0;
}

void ID(int *p){
	int i;
	for(i=0; i<10; i++){
		*(p+i)=rand()%100;
	}
}

void PA(int ar[]){
	int i;
	for(i=0; i<10; i++){
		printf("%2d ", ar[i]);
	}
	printf("\n");
}

int GX(int *ar){
	int a=0;
	int i;
	for(i=0; i<10; i++){
		if(*(ar+i)>a){
			a=*(ar+i);
		}
	}
	return a;
}

int GN(int *ar){
	int a=100;
	int i;
	for(i=0; i<10; i++){
		if(*(ar+i)<a){
			a=*(ar+i);
		}
	}
	return a;
}*/
/*void ID(int *p);
void PA(int ar[]);
int SC(int *p, int a);
void DN(int *p, int a);

int main(){
	srand((unsigned)time(NULL));
	
	int ar[100]={0};
	int a;
	
	ID(ar);
	PA(ar);
	printf("¼ö:");
	scanf("%d", &a);
	printf("%d\n\n", SC(ar, a));
	DN(ar, a);
	return 0;
}

void ID(int *p){
	int i;
	for(i=0; i<100; i++){
		*(p+i)=rand()%100;
	}
}

void PA(int ar[]){
	int i;
	for(i=0; i<100; i++){
		printf("%2d ", ar[i]);
		if(i%10==9&&i!=0){
			printf("\n");
		}
	}
	printf("\n");
}

int SC(int *p, int a){
	int i, n=0;
	for(i=0; i<100; i++){
		if(*(p+i)==a){
			n++;
		}
	}
	return n;
}

void DN(int *p, int a){
	int i;
	for(i=0; i<100; i++){
		if(*(p+i)==a){
			printf("%2d ", i);
		}
	}
}*/
void ID(double *p);
void PA(double n[]);

void b(double *p);
void s(double *p);

int main(){
	double n[9]={0};
	
	ID(n);
	PA(n);
	
	b(n);
	PA(n);
	
	s(n);
	PA(n);
}

void ID(double *p){
	int i;
	for(i=0; i<10; i++){
		*(p+i)=(rand()%1000)/10;
	}
}

void PA(double n[]){
	int i;
	for(i=0; i<10; i++){
		printf("%2d ", n[i]);
		if(i%10>=9&&i!=0){
			printf("\n");
		}
	}
	printf("\n");
}

void b(int *n){
	int d, a=0;
	int i;
	for(i=0; i<10; i++){
		if(*(n+i)>a){
			a=*(ar+i);
		}
	}
	
}

void s(int *n){
	int a=100;
	int i;
	for(i=0; i<10; i++){
		if(*(n+i)<a){
			a=*(ar+i);
		}
	}
}
