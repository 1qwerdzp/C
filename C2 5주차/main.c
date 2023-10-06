#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*int main(int argc, char *argv[]) {
	int ar[10]={10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	
	printf("%d\n", ar);
	printf("%d\n", ar[1]);
	printf("%d\n", ar+1);
	printf("%d\n", &ar[1]);
	printf("%d\n", *(ar+1));
	return 0;
}*/
/*void main(){
	int ar[10]={10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	int i;
	
	*(ar+0)=34;
	*(ar+1)=21;
	
	printf("%d %d\n", ar[0], *(ar+0));
	printf("%d %d\n", ar[1], *(ar+1));
	printf("%d %d\n", *(ar+2), *(ar+3));
}*/
/*void main(){
	int ar[10]={11, 21, 31, 41, 51, 61, 71};
	int *p, *q, *r;
	
	p=ar;
	q=&ar[1];
	r=(ar+2);
	
	printf("%d %d\n", *p, ar[0]);
	printf("%d %d\n", *q, *(ar+1));
	printf("%d %d\n", *r, ar[2]);
}*/
/*void main(){
	int ar[10]={11, 21, 31, 41, 51, 61, 71};
	int *p, i;
	
	p=ar;
	for(i=0; i<7; i++){
		printf("%d\n", *(p+i));
	}
}*/
/*void main(){
	int ar[3]={1, 2, 3};
	int ar2[3][3]={{1, 2, 3},{4, 5, 6},{7, 8, 9}};
	
	printf("%d\n", ar);
	printf("%d\n", &ar[0]);
	
	printf("%d\n", ar2);
	printf("%d\n", &ar2[0][0]);

	printf("%d\n", &ar2[1][0]);
}*/
/*void main(){
	int ar[3][4]={{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
	int *p, i;
	
	p=ar;
	for(i=0; i<sizeof(ar)/4; i++){
		printf("%d\n", *(p+i));
	}
}*/
/*void main(){
	char str[]="Hello String";
	char name[20]="¾¾Å¥ºê ÄÚµù";
	char *p, *q;
	
	p=str;
	q=name;
	
	printf("%d %d\n", str, name);
	printf("%s %s\n", str, name);
}*/
/*void main(){
	char str[]="Hello String";
	char name[20]="¾¾Å¥ºê ÄÚµù";
	char *p, *q;
	
	p=str;
	q=name;
	
	printf("%d %d\n", str, "Hello String");
	printf("%d %d\n", mame, "¾¾Å¥ºê ÄÚµù");
	printf("%s %s\n", str, "Hello String");
	printf("%s %s\n", name, "¾¾Å¥ºê ÄÚµù");
}*/
/*void PA(int ar[]);
void ID(int *p);

int main(){
	int ar[5]={0};
	
	PA(ar);
	ID(ar);
	PA(ar);
	return 0;
}
void PA(int ar[]){
	for(int i=0; i<5; i++){
		printf("%2d", ar[i]);
	}
	printf("\n");
}
void ID(int *p){
	for(int i=0; i<5; i++){
		scanf("%d", &p[i]);
	}
}*/
void ID(int *p);
void PA(int ar[]);
int GX(int *ar);
int GN(int *ar)
int main(){
	srand(unsiged time(NULL));
	
	int ar[10]={0};
	int max, min;
	
	ID(ar);
	max=GX(ar);
	min=GN(ar);
	return 0;
}
void ID(int *p){
	for(int i=0; i<10; i++){
		num=rand()%100;
		p+i=num;
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
